module.exports = grammar({
  name: 'lx',

  word: $ => $.identifier,

  extras: $ => [
    $.comment,
    /[\s\n\t]/,
  ],

  precedences: _ => [
    [
      'unary',
      'binary_times',
      'binary_plus',
      'binary_relation',
      'binary_equality',
      'logical_and',
      'logical_or',
    ],
  ],

  conflicts: $ => [
    [$.source_file, $.binary_expression],
    [$.source_file, $.call],
    [$.call, $.parenthesized_expression],
  ],

  rules: {
    source_file: $ => seq(
      optional($.shell_bang),
      repeat($._expression),
    ),
    shell_bang: _ => token.immediate(/#!.*/),
    _expression: $ => seq(choice(
      $.call,
      $.parenthesized_expression,
      $.unary_expression,
      $.binary_expression,
      $.array,
      $._primary,
    )),

    parenthesized_expression: $ => seq('(', $._expression, ')'),
    call: $ => seq($._expression, '(', commaSep($._expression), ')'),


    unary_expression: $ => choice(
      ...['!', '-'].map((operator) =>
        prec.left('unary', seq(
          field('operator', operator),
          field('right', $._expression),
        )),
      ),
    ),

    binary_expression: $ => choice(
      ...[
        ['and', 'logical_and'],
        ['or', 'logical_or'],
        ['+', 'binary_plus'],
        ['-', 'binary_plus'],
        ['*', 'binary_times'],
        ['/', 'binary_times'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['==', 'binary_equality'],
        ['!=', 'binary_equality'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
      ].map(([operator, precedence]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      )))
    ),

    // array: $ => seq('[', repeat(seq($._expression, optional(','))), ']'),
    array: $ => seq('[', commaSep($._expression), ']'),

    _primary: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.boolean,
      $.nil,
    ),
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: _ => {
      const _numeral = () =>
        seq(repeat1(/[0-9]/), optional(seq('.', repeat1(/[0-9]/))))
      return token(seq(optional('-'), _numeral()))
    },
    string: $ => seq(
      '"',
      repeat(choice(
        alias($.unescaped_double_string_fragment, $.string_fragment),
        $.escape_sequence,
      )),
      '"',
    ),
    unescaped_double_string_fragment: _ => token.immediate(prec(1, /[^"\\]+/)),
    escape_sequence: _ => token.immediate(seq(
      '\\',
      choice('n', 'r', 't', '\\', '"'),
    )),
    boolean: _ => choice('true', 'false'),
    nil: _ => 'nil',

    comment: _ => seq('//', /.*/),
  }
})

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)), optional(','))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
