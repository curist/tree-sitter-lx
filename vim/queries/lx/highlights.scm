(import "import" @include)

[
 "let"
 "return"
 "defer"
 "break"
 (continue)
] @keyword

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

"fn" @keyword.function
(function_declaration (function_name) @function)
(function_declaration (parameter_list (identifier) @parameter))

(call name: _ @function)

(ERROR) @error
