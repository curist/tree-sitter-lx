(import "import" @include)

[
 "let"
 "return"
 "defer"
 "break"
 (continue)
] @keyword

"fn" @keyword.function
(function_declaration (function_name) @function)
(function_declaration (parameter_list (identifier) @parameter))

(call name: (identifier) @function)
(call name: (identifier) @function.builtin
      (#any-of? @function.builtin
       "_1" "_2" "_3" "do" "slurp" "int" "ord" "assoc" "push"
       "pop" "append" "butlast" "concat" "str" "type"
       "keys" "range" "each" "map" "filter" "fold" "contains"
       "foldr" "len" "print" "groan" "random"
       "getline" "read" "tonumber" "tolower" "toupper"
       "take" "drop" "join" "startsWith" "endsWith"
       "system"
       ))

[
 "(" ")"
 "[" "]"
 ".{" "{" "}"
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
