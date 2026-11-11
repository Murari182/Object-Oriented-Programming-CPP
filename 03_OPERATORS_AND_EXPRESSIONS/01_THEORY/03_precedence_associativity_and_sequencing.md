# 03 — Operator Precedence, Associativity, and C++17/20/23 Sequencing Rules

1. **Guaranteed Sequenced Operators**:
   - Logical `&&`, `||`, ternary `?:`, and comma `,` have always sequenced their left operand before their right operand.
   - Since **C++17** (and in C++20/C++23): `a << b`, `a >> b`, `a.b`, `a->b`, and `a[b]` evaluate `a` before `b`, and assignment `a = b` evaluates `b` before `a`.
2. **Still Unsequenced in C++23**:
   - The operands of binary `+`, `-`, `*`, `/` and the separate arguments of a function call `f(a, b)` remain **unsequenced** (or indeterminately sequenced for function arguments). Never write `i = i++` or `a[i] = i++` or `i++ + ++i` — these are **Undefined Behavior**!
