const _numeral = () =>
  seq(repeat1(/[0-9]/), optional(seq('.', repeat1(/[0-9]/))))

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
    shell_bang: _ => /#!.*/,
    _expression: $ => choice(
      $._primary,
    ),
    _primary: $ => choice(
      $.identifier,
      $.number,
      $.string,
    ),
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: _ => token(seq(optional('-'), _numeral())),
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
    comment: _ => token(seq('//', /.*/)),
  }
})
