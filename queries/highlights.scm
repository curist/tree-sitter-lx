[
 "let"
 "return"
 "defer"
] @keyword

"fn" @keyword.function
(function_declaration
  (function_name) @function
  (parameter_list (identifier) @parameter))

(call
  (identifier) @function.builtin
  (#any-of? @function.builtin
   "require" "print" "prompt"
   "dir" "type" "str" "len" "keys" "append"))

[
 "(" ")"
 "[" "]"
 "{" "}"
] @punctuation.bracket

[ "if" "else" ] @conditional

(for) @repeat

(unary_expression operator: [_] @operator)
(binary_expression operator: [_] @operator)
[ "and" "or" ] @keyword.operator

[ ";" "," "." ] @punctuation.delimiter 

(keyvalue key: (identifier) @field)

(identifier) @variable

((identifier) @constant
 (#match? @constant "^[A-Z][A-Za-z_0-9]{,20}$"))

(boolean) @boolean
(string) @string
(number) @number
(nil) @constant.builtin

(shell_bang) @preproc
(comment) @comment

(ERROR) @error
