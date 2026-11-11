# 02 — Default Arguments, `inline` Functions, and Function Overloading

## 1. Trailing Default Arguments Rule (`[dcl.fct.default]`)
Once a parameter is given a default argument in a function declaration, **all subsequent parameters to its right** must also have default arguments:
- `int sum(int a, int b = 10, int c = 20);` -> **Legal**
- `int bad(int a = 10, int b);` -> **Compilation Error!**

## 2. Function Overloading Rules
Two functions in the same scope can share the same name if and only if their **parameter-type-lists** differ (in number, types, or `const` qualification of reference/pointer targets).
- **Crucial Rule**: Functions **cannot** be overloaded based **solely on return type** (`int f(int)` and `double f(int)` in the same scope is a **Compilation Error**).
