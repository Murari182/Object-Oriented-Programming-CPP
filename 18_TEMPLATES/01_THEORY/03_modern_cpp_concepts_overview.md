# 03 — Modern C++20 / C++23 `concepts` Overview

In C++20 and C++23 (`#include <concepts>`), you can constrain a template parameter using `requires` so the compiler produces a clear error message if a non-numeric type is passed:
```cpp
template <typename T>
requires (sizeof(T) >= 4)
T add_values(T a, T b) { return a + b; }
```
