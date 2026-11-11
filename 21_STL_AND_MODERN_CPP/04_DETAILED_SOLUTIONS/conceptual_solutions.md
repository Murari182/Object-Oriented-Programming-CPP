# Detailed Solutions — Conceptual Questions (Module 21)
- **Q1 Solution**: `size()` is the number of elements currently stored; `capacity()` is the total number of elements the vector can hold in its current heap buffer before reallocating.
- **Q2 Solution**: `v[i]` does not check bounds (Undefined Behavior if out of range); `v.at(i)` checks bounds and throws `std::out_of_range`.
