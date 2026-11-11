# 03 — Iterators, `<algorithm>`, and C++17/20/23 Structured Bindings

```cpp
for (const auto& [roll, marks] : student_map) {
    cout << roll << " -> " << marks << endl;
}
```
C++20/C++23 also provides `std::ranges::sort(vec)` and `.contains(key)` on `std::map` and `std::set`.
