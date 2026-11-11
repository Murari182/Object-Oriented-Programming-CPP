# 02 — Variable Initialization Forms and Narrowing Prevention

1. **Copy Initialization**: `int x = 10;`
2. **Direct Initialization**: `int x(10);`
3. **Direct-List / Brace Initialization (C++11–C++23)**: `int x{10};` or `int x{};` (zero-initialized to `0`).
   - **Key Advantage of `{}`**: Prohibits **narrowing conversions** at compile time (`int x{3.14};` is a **Compile-Time Error**, whereas `int x = 3.14;` silently truncates `.14`!).
4. **Uninitialized Local Variables**: Reading an uninitialized local non-static variable (`int x; cout << x;`) is **Undefined Behavior**.
