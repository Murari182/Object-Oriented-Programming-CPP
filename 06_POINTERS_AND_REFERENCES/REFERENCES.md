# References — Module 06: Pointers and References

1. **ISO/IEC 14882:2023 (C++23 Standard)**
   - **Relevant Topic**: Compound types (`[basic.compound]`), Lvalues and rvalues (`[basic.lval]`), Sequencing and evaluation order (`[intro.execution]`), Additive operators on pointers (`[expr.add]`), Indirection and address-of (`[expr.unary.op]`), Postfix/Prefix increment (`[expr.post.incr]`, `[expr.pre.incr]`).
   - **URL**: https://eel.is/c++draft/
   - **Information Used**: Formal definition of pointer values (pointing to an object, past-the-end, null, or invalid), strict rules on unsequenced scalar modifications (`*p++ + *p++`), and pointer arithmetic bounds.

2. **cppreference.com — Pointer Declarations & Operator Precedence**
   - **Relevant Topic**: Pointer syntax, `const` qualification, and operator precedence table.
   - **URL**: https://en.cppreference.com/w/cpp/language/pointer and https://en.cppreference.com/w/cpp/language/operator_precedence
   - **Information Used**: Precedence Level 2 (postfix `++`/`--`, left-to-right) vs. Precedence Level 3 (prefix `++`/`--` and unary `*`/`&`, right-to-left).

3. **cppreference.com — Dynamic Memory Management (`<memory>`)**
   - **Relevant Topic**: `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`, `std::make_unique`, `std::make_shared`.
   - **URL**: https://en.cppreference.com/w/cpp/memory
   - **Information Used**: Modern ownership semantics and automated resource cleanup compared to raw pointers.

4. **C++ Core Guidelines — Resource Management & Bounds Profile**
   - **Relevant Topic**: `R.1` (Manage resources automatically), `ES.42` (Keep use of pointers simple and straightforward), `ES.65` (Don't dereference an invalid pointer).
   - **URL**: https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-resource
   - **Information Used**: Distinguishing classroom raw pointers (for non-owning observation and learning) from owning smart pointers.
