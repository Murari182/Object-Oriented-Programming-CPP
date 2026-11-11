# References — Module 16: Exception Handling

1. **ISO/IEC 14882:2023 (C++23 Standard)**
   - **Relevant Topic**: Exception handling (`[except]`), Throwing an exception (`[except.throw]`), Constructors and destructors during stack unwinding (`[except.ctor]`), Handling an exception (`[except.handle]`), `noexcept` specification (`[except.spec]`).
   - **URL**: https://eel.is/c++draft/except
   - **Information Used**: Exact rules for handler matching (no implicit arithmetic conversions like `int` to `double` in `catch`), stack unwinding order, and `std::terminate()` invocation when a `noexcept` function or destructor throws.

2. **cppreference.com — Exceptions & `<stdexcept>`**
   - **Relevant Topic**: Standard exception hierarchy and Abrahams Exception Safety Guarantees.
   - **URL**: https://en.cppreference.com/w/cpp/language/exceptions
   - **Information Used**: Basic, Strong, and No-Throw exception guarantees and standard exception classes.
