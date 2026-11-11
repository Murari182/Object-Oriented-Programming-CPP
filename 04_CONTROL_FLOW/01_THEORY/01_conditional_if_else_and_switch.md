# 01 — Conditional Selection: `if-else` and `switch-case`

## 1. `if-else` Pitfall: Assignment `=` vs. Equality `==`
Writing `if (x = 5)` assigns `5` to `x` and evaluates to `true` (because `5 != 0`)! Always use `==` for comparison.

## 2. `switch` Statement Rules (`[stmt.switch]`)
- The condition of a `switch(expr)` **must** have an **integral or enumeration type** (`int`, `char`, `enum`). Floating-point types (`float`, `double`) and `std::string` are **Compilation Errors** in `switch`!
- Every `case` label must be an integral constant expression (`constexpr`).
- Omitting `break;` causes execution to **fall through** into the next `case` block!
