[
 (array)
 (hashmap)
 (argument_list)
 (parameter_list)
 (function_body)
 (block)
 (assignment)
 (unary_expression)
 (binary_expression)
 (lambda)
 (value_access)
 (enum)
] @indent.begin

(if (then_clause) @indent.begin)
(if "else" @indent.begin)

[
 ")"
 "}"
 "]"
] @indent.end

[
 ")"
 "}"
 "]"
] @indent.branch


; (shell_bang) @zero_indent

(string) @indent.ignore

(comment) @indent.auto

