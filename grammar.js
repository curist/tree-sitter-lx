module.exports = grammar({
  name: 'lx',

  word: $ => $.identifier,

  extras: $ => [
    $.comment,
    /[\s\n\t]/,
  ],

  rules: {
    source_file: $ => seq(
      optional($.shell_bang),
      repeat($._expression),
    ),
    shell_bang: _ => token.immediate(/#!.*/),
    _expression: $ => seq(choice(
      $._primary,
      $.array,
    )),

    array: $ => seq('[', repeat(seq($._expression, optional(','))), ']'),
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
