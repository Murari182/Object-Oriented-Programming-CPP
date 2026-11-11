# Conceptual Questions — Module 16: Exception Handling

**Q1.** Differentiate between compile-time errors, synchronous runtime exceptions, and hardware traps/Undefined Behavior in C++.

**Q2.** Explain **Stack Unwinding** in detail. In what order are local stack objects destroyed when an exception is thrown inside a `try` block? What happens if an object's constructor throws an exception halfway through its body?

**Q3.** What is the difference between rethrowing an exception using `throw;` versus `throw e;` inside a `catch (const BaseException& e)` block?

**Q4.** Define and compare the **Basic**, **Strong**, and **No-Throw (`noexcept`)** exception safety guarantees with an example of each. Why must destructors in C++ never throw exceptions?
