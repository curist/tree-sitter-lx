[
 "let"
 "return"
 "defer"
 "break"
 (continue)
] @keyword

"fn" @keyword.function
(function_declaration
  (function_name) @function
  (parameter_list (identifier) @parameter))

(call name: (identifier) @function.builtin
  (#any-of? @function.builtin
   "print" "dir" "type" "str" "len" "keys" "append"))

(call name: (identifier) @include
      ((#match? @include "^require$")))

(call name: (identifier) @function)

[
 "(" ")"
 "[" "]"
 "{" "}"
] @punctuation.bracket

[ "if" "else" ] @conditional

(for "for" @repeat)

"=" @operator
[ "and" "or" ] @keyword.operator
(unary_expression operator: [_] @operator)
(binary_expression operator: [_] @operator)

[ ";" "," "." ] @punctuation.delimiter 

(keyvalue key: (identifier) @field)

(identifier) @variable

((identifier) @constant
 (#match? @constant "^[A-Z][A-Za-z_0-9]{0,20}$"))

(boolean) @boolean
(string) @string
(number) @number
(nil) @constant.builtin

(shell_bang) @preproc
(comment) @comment

(ERROR) @error
