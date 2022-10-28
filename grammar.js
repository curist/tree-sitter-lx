const SHEBANG = /#!.*/
const WHITESPACE = /[\s\n\t]/

module.exports = grammar({
  name: 'lx',

  extras: $ => [
    $.comment,
    WHITESPACE,
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => seq(
      optional($.shebang),
      repeat($.expression),
    ),
    shebang: $ => SHEBANG,
    expression: $ => choice(
      $.hello,
    ),
    hello: $ => 'hello',
    comment: $ => token(seq('//', /.*/)),
  }
})
