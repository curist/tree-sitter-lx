[
 "if"
 "else"
] @conditional

[
 "and"
 "or"
] @keyword.operator


[
 "let"
 (return)
 (defer)
] @keyword

[
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
   "require" "print" "prompt"
   "dir" "type" "str" "len" "keys" "append"))

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


