# References — Module 12: Operator Overloading

1. **ISO/IEC 14882:2023 (C++23 Standard)**
   - **Relevant Topic**: Overloaded operators (`[over.oper]`), Unary operators (`[over.unary]`), Binary operators (`[over.binary]`), Increment and decrement (`[over.inc]`), Expressions — Arithmetic overflow (`[expr.pre]` paragraph 4: *"If during the evaluation of an expression, the result is not mathematically defined or not in the range of representable values for its type, the behavior is undefined."*).
   - **URL**: https://eel.is/c++draft/over.oper
   - **Information Used**: Member vs. non-member operator overload lookup, dummy `int` parameter for postfix `++`, and signed integer overflow UB rules.

2. **cppreference.com — Operator Overloading**
   - **Relevant Topic**: Overloadable and non-overloadable operators, canonical signatures, and member-only operators (`=`, `[]`, `()`, `->`).
   - **URL**: https://en.cppreference.com/w/cpp/language/operators
   - **Information Used**: Complete table of non-overloadable operators and `const` correctness guidelines.
