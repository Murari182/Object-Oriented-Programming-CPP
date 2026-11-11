# 03 — `const`, `constexpr`, and `auto` Type Deduction

- **`const`**: Promises that the variable cannot be modified after initialization (value may be computed at runtime or compile time).
- **`constexpr` (C++11–C++23)**: Guarantees that the variable's value is a **compile-time constant expression** (usable as an array bound `int arr[MAX];`).
- **`auto`**: Deduces the variable's type at compile time from its initializer (`auto pi = 3.14;` deduces `double`).
