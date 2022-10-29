module.exports = grammar({
  name: 'lx',

  extras: $ => [
    $.comment,
    /[\s\n\t]/,
  ],

  rules: {
    source_file: $ => seq(
      optional($.shell_bang),
      repeat($.expression),
    ),
    shell_bang: _ => /#!.*/,
    expression: $ => choice(
      $.hello,
    ),
    hello: $ => 'hello',
    comment: _ => token(seq('//', /.*/)),
  }
})
