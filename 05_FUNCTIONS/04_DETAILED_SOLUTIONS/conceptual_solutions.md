# Detailed Solutions — Conceptual Questions (Module 05)
- **Q1 Solution**: **No.** Overload resolution selects a function based on the arguments at the call site (`f(10)` may ignore the return value completely), so return type is not part of the function signature used for overloading.
- **Q2 Solution**: Once a parameter has a default argument, every parameter to its right must also have a default argument so positional arguments at the call site map unambiguously.
