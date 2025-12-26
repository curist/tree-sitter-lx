(import "import" @include)

[
 "let"
 "return"
 "defer"
 (break)
 (continue)
] @keyword

[
 "(" ")"
 "[" "]"
 ".{" "{" "}"
] @punctuation.bracket

[ "if" "else" ] @conditional

(for "for" @repeat)
(collect "collect" @repeat)
"in" @keyword

"=" @operator
(unary_expression operator: [_] @operator)
(binary_expression operator: [_] @operator)
[ "and" "or" ] @keyword.operator

[ ";" "," "." ] @punctuation.delimiter

; Identifiers: ordered from least to most specific
(identifier) @variable

((identifier) @constant
 (#match? @constant "^[A-Z][A-Za-z_0-9]{0,20}$"))

(keyvalue key: (identifier) @field)
(function_declaration (parameter_list (identifier) @parameter))

(boolean) @boolean
(string) @string
(number) @number
(nil) @constant.builtin

(shell_bang) @preproc
(comment) @comment

"fn" @keyword.function
(function_declaration (function_name) @function)

(call name: _ @function)

(ERROR) @error
