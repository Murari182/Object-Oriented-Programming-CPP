# Conceptual Questions — Module 12: Operator Overloading

### Level 1 — Beginner
**Q1.** What is operator overloading in C++? List at least five C++ operators that **cannot** be overloaded and four operators that **must** be overloaded as non-static member functions.

**Q2.** In the classroom `complex_system` class, explain how the compiler interprets `c3 = c1 + c2;` when `operator+` is a member function vs. when `operator+` is a `friend` function.

### Level 2 — Intermediate
**Q3.** Why does a binary operator overloaded as a member function require only **one** explicit parameter, whereas the same binary operator overloaded as a `friend` function requires **two** explicit parameters?

**Q4.** How does the C++ compiler differentiate between prefix increment (`++obj`) and postfix increment (`obj++`) during operator overloading? Why does prefix `++` typically return by reference (`T&`) while postfix `++` returns by value (`T`)?

### Level 3 — Advanced
**Q5.** Why must the stream insertion operator (`<<`) and stream extraction operator (`>>`) be overloaded as non-member (often `friend`) functions rather than member functions of your class?

### Level 4 — University Examination Level
**Q6.** Explain why signed integer overflow is **Undefined Behavior** in C++23 even though signed integers use two's complement representation. Specifically, if `complex_system::Show_Num()` formats negative imaginary components using `if (imag < 0) cout << real << " - " << -imag << "i";`, what happens when `imag == INT_MIN` and how do you fix it safely?
