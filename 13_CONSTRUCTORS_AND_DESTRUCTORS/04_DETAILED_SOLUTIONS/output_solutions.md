# Detailed Solutions — Predict the Output & Debugging (Module 13)
- **Q3 Solution**: **Undefined Behavior!** Because `int a;` is declared **before** `int b;` inside `class test`, `a(b + 10)` is evaluated **first** while `b` is still uninitialized! Always write member initializer lists in the exact declaration order of the data members.
- **Q4 Solution**: Defining any user-declared constructor suppresses the compiler-generated default constructor. Fix: add `person() = default;` or provide a default argument `person(int a = 0)`.
