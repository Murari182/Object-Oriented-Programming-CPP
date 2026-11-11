# Master Technical References & Standards Bibliography

All explanations, language rules, evaluation-order guarantees, and library specifications in `CPP_COMPLETE_REFERENCE_LIBRARY/` are grounded in the following authoritative sources:

## 1. ISO C++ Standard & Working Drafts
- **Source Name**: ISO/IEC 14882:2023 (Programming Languages — C++, C++23) & Public Working Draft N4950
- **Relevant Topics**: Lexical conventions, object lifetime (`[basic.life]`), value categories (`[basic.lval]`), sequencing and evaluation order (`[intro.execution]`), class access control (`[class.access]`), derived class access (`[class.access.inh]`), operator overloading (`[over.oper]`), exception handling (`[except]`).
- **URL**: https://isocpp.org/std/the-standard (Working drafts: https://eel.is/c++draft/)
- **Information Used**: Exact rules for undefined behavior vs. ill-formed code, C++17/C++20/C++23 sequencing rules, access specifier transformations in inheritance, and exception stack unwinding guarantees.

## 2. cppreference.com
- **Source Name**: C++ Reference (`en.cppreference.com`)
- **Relevant Topics**: C++ Operator Precedence, Pointer Declarations, `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`, `std::string`, `<iostream>`, `<fstream>`, `<exception>`, and Standard Template Library containers.
- **URL**: https://en.cppreference.com/w/cpp
- **Information Used**: Standard library headers, C++17/C++20/C++23 version annotations, operator precedence and associativity tables, and exception safety guarantees.

## 3. C++ Core Guidelines
- **Source Name**: C++ Core Guidelines (Edited by Bjarne Stroustrup and Herb Sutter)
- **Relevant Topics**: Resource management (RAII), `const` correctness, pointer vs. reference selection, class hierarchy design, and error handling (`E.*`, `R.*`, `C.*`).
- **URL**: https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
- **Information Used**: Best-practice comparisons showing when simple classroom constructs are sufficient and when modern C++ practices (`nullptr`, member initializer lists, `override`, `unique_ptr`) improve safety.

## 4. GCC & Clang Compiler Documentation
- **Source Name**: GCC Online Documentation (GNU Compiler Collection) & Clang C++ Language Compatibility Documentation
- **Relevant Topics**: Compiler diagnostics (`-Wall -Wextra -Wpedantic`), `-std=c++23` flags, access-violation error messages, and unsequenced modification warnings (`-Wsequence-point`).
- **URL**: https://gcc.gnu.org/onlinedocs/ and https://clang.llvm.org/docs/
- **Information Used**: Explaining compiler error messages on Category B (`_compile_error.cpp`) programs and warning flags for student lab verification.
