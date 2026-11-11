# Detailed Solutions — Conceptual Questions (Module 18)
- **Q1 Solution**: No difference in a template parameter declaration; both `class` and `typename` accept both fundamental types (`int`) and class types.
- **Q2 Solution**: Templates are type-safe, obey C++ scope rules, and evaluate arguments exactly once, whereas `#define MAX(a,b) ((a)>(b)?(a):(b))` performs blind text substitution and evaluates `a++` twice!
