module.exports = grammar({
  name: 'lx',

  word: $ => $.identifier,

  extras: $ => [ $.comment, /\s/ ],

  precedences: _ => [
    [
      'unary',
      'binary_times',
      'binary_plus',
      'binary_relation',
      'binary_equality',
      'logical_and',
      'logical_or',
      'assignment',
      'unary_statement',
    ],
  ],

  conflicts: $ => [
    [$.source_file, $.binary_expression],
    [$.block, $.binary_expression],
    [$.block, $.hashmap],
  ],

  rules: {
    source_file: $ => seq(
      optional($.shell_bang),
      repeat($._expression),
      optional($.return),
    ),
    shell_bang: _ => token.immediate(/#!.*/),
    _expression: $ => seq(choice(
      $._declaration,
      $.assignment,
      $.unary_expression,
      $.binary_expression,
      $._call,
      $.array,
      $.hashmap,
      $.block,
      $.if,
      $.for,
    )),

    hashmap: $ => seq('{', trailingCommaSep($.keyvalue), '}'),
    keyvalue: $ => seq(field('key', $._hashmap_key), ':', field('value', $._expression)),
    _hashmap_key: $ => choice(
      $.identifier,
      seq('[', $._expression, ']'),
    ),

    block: $ => seq('{', repeat(choice($._expression, $.defer)), optional($._end_of_block_statement), '}'),
    defer: $ => prec('unary_statement', seq('defer', $._expression)),
    _end_of_block_statement: $ => choice(
      $.break,
      $.continue,
      $.return,
    ),
    return: $ => prec('unary_statement', seq('return', optional($._expression))),
    break: $ => prec('unary_statement', seq('break', optional($._expression))),
    continue: _ => 'continue',

    _declaration: $ => choice(
      $.variable_declaration,
      $.function_declaration,
    ),
    variable_declaration: $ => prec.left('assignment', seq('let', field('name', $.identifier), optional(seq('=', $._expression)))),
    function_declaration: $ => seq('fn', alias($.identifier, $.function_name), $.parameter_list, alias($.block, $.function_body)),
    parameter_list: $ => seq('(', trailingCommaSep($.identifier), ')'),

    for: $ => prec.left(1,  // XXX: not sure why can't use general prec rule for this...
      choice(
        seq(
          'for',
          optional(alias($._expression, $.cond)),
          $.block,
        ),
        seq(
          'for',
          optional(alias($._expression, $.init)),
          ';',
          optional(alias($._expression, $.cond)),
          optional(seq(';', optional(alias($._expression, $.iter)))),
          $.block,
        ),
      ),
    ),

    assignment: $ => prec.left('assignment', seq($._call, '=', $._expression)),

    _call: $ => prec.right(1, choice(
      $._primary,
      $._value_access,
    )),
    _value_access: $ => choice(
      $.value_access,
      $.call,
    ),
    value_access: $ => prec.left(1, choice(
      seq($._call, '.', $._call),
      seq($._call, '[', $._expression, ']'),
    )),
    call: $ => prec.right(1, seq($._call, $.argument_list)),
    argument_list: $ => seq('(', trailingCommaSep($._expression), ')'),

    if: $ => prec.left(seq(
      'if',
      alias($._expression, $.cond),
      alias($.block, $.then_clause),
      optional(seq('else', alias($._expression, $.else_clause))),
    )),

    unary_expression: $ => choice(
      ...['!', '-'].map((operator) =>
        prec.right('unary', seq(
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

    array: $ => seq('[', trailingCommaSep($._expression), ']'),

    _primary: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.boolean,
      $.lambda,
      $.nil,
      $._parenthesized_expression,
    ),
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: _ => {
      const _numeral = () =>
        seq(repeat1(/[0-9]/), optional(seq('.', repeat1(/[0-9]/))))
      return token(seq(optional('-'), _numeral()))
    },
    string: _ => seq('"', repeat(choice(/[^"\\]/, /\\./)), '"'),
    boolean: _ => choice('true', 'false'),
    nil: _ => 'nil',
    lambda: $ => seq('fn', $.parameter_list, alias($.block, $.function_body)),
    _parenthesized_expression: $ => seq('(', $._expression, ')'),

    comment: _ => seq('//', /.*/),
  }
})

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)), optional(','))
}

function trailingCommaSep(rule) {
  return optional(seq(commaSep1(rule), optional(',')))
}
