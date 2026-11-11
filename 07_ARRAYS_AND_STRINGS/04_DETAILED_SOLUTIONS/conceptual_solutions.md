# Detailed Solutions — Conceptual Questions (Module 07)
- **Q1 Solution**: $\text{Address}(\text{arr}[i][j]) = \text{Base} + (i \times C + j) \times \text{sizeof}(\text{int})$.
- **Q2 Solution**: The string literal `"Hello"` has 5 characters plus 1 mandatory null terminator `'\0'`, so its type is `const char[6]`. Initializing a 5-element `char[5]` from a 6-element string literal is ill-formed in C++.
- **Q3 Solution**: Function parameters declared as `int arr[]` are adjusted by the compiler to `int* arr` (array-to-pointer decay), so `sizeof(arr)` evaluates `sizeof(int*)`.
