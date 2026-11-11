# Detailed Solutions — Conceptual Questions (Module 03)
- **Q1 Solution**: Built-in `&&` evaluates its left operand first and short-circuits if it is `false`, so `*p` is never dereferenced when `p == nullptr`.
- **Q2 Solution**: Binary `+` does not sequence its left and right operands (`[intro.execution]`), so modifying `i` twice is unsequenced Undefined Behavior.
