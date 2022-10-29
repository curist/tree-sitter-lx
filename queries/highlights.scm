[
 "if"
 "else"
] @conditional

[
 "and"
 "or"
] @keyword.operator

(import) @include

[
 (return)
 (defer)
] @keyword

[
 "let"
 (while)
 (for)
] @repeat

"fn" @keyword.function
(function_declaration
  (function_name) @function
  (parameter_list (identifier) @parameter))

(call
  (identifier) @function.builtin
  (#any-of? @function.builtin
   "dir" "clock" "print" "type" "prompt"
   "str" "keys" "append" "len"))

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

[
 "!"
 "-"
 "+"
 "-"
 "*"
 "/"
 "=="
 "!="
 "<="
 ">="
 "<"
 ">"
 "="
] @operator

[
 ";"
 ","
 "."
] @punctuation.delimiter 

(keyvalue key: (identifier) @field)

(identifier) @variable

((identifier) @constant
 (#lua-match? @constant "^[A-Z][A-Za-z_0-9]*$"))

(boolean) @boolean
(string) @string
(number) @number
(nil) @constant.builtin

(comment) @comment @spell
(shell_bang) @preproc


