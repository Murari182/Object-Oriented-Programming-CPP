# Detailed Solutions — Conceptual Questions (Module 02)
- **Q1 Solution**: `const` means read-only after initialization (may be initialized at runtime); `constexpr` guarantees compile-time evaluation.
- **Q2 Solution**: `{}` list-initialization makes narrowing conversions (`double` to `int`) ill-formed at compile time instead of silently truncating fractional digits.
