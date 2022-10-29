const _numeral = () =>
  seq(repeat1(/[0-9]/), optional(seq('.', repeat1(/[0-9]/))))

module.exports = grammar({
  name: 'lx',

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
    ),
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: _ => token(seq(optional('-'), _numeral())),
    comment: _ => token(seq('//', /.*/)),
  }
})
