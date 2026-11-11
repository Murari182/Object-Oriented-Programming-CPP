# References — Module 10: Inheritance

1. **ISO/IEC 14882:2023 (C++23 Standard)**
   - **Relevant Topic**: Derived classes (`[class.derived]`), Multiple base classes (`[class.mi]`), Member name lookup (`[class.member.lookup]`), Accessibility of base classes and base class members (`[class.access.base]`, `[class.access.inh]`), Initializing bases and members (`[class.base.init]`).
   - **URL**: https://eel.is/c++draft/class.derived
   - **Information Used**: Exact access transformation rules for `public`, `protected`, and `private` base-specifiers, why `protected` members of a derived class cannot be accessed through a derived object inside `main()`, and virtual base class initialization order.

2. **cppreference.com — Derived Classes & Access Specifiers**
   - **Relevant Topic**: Syntax and semantics of inheritance modes and virtual base classes.
   - **URL**: https://en.cppreference.com/w/cpp/language/derived_class
   - **Information Used**: Access control table and diamond inheritance subobject layout.

3. **C++ Core Guidelines — Class Hierarchies (`C.hier`)**
   - **Relevant Topic**: `C.120` (Use class hierarchies to represent concepts with inherent hierarchical structure), `C.129` (Distinguish between interface inheritance and implementation inheritance).
   - **URL**: https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-class
   - **Information Used**: When to use `public` inheritance ("is-a" relationship) versus `protected`/`private` inheritance ("implemented-in-terms-of").
