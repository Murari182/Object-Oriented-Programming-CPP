# Conceptual Questions — Module 10: Inheritance

### Level 1 — Beginner
**Q1.** What is inheritance in C++? What is the default inheritance visibility mode when deriving a `class` vs. deriving a `struct`?

**Q2.** Draw the complete access-specifier transformation table for `public`, `protected`, and `private` base members when inherited via `public`, `protected`, and `private` modes.

### Level 2 — Intermediate
**Q3.** In Classroom Example 1 (`class sub : protected super`), why does `sub obj; obj.show();` fail to compile in `main()` even though `show()` was declared `public` in `super`?

**Q4.** In Classroom Example 2 (`class student : protected person`), explain why `display()` inside `student` can call `input(30)`, whereas `s.input(40)` inside `main()` causes a compilation error.

### Level 3 — Advanced
**Q5.** What is the exact order of constructor and destructor execution in a multilevel inheritance hierarchy (`A -> B -> C`) and in a multiple inheritance hierarchy (`class C : public A, public B`)?

### Level 4 — University Examination Level
**Q6.** Explain the **Diamond Problem** in multipath inheritance with a diagram. How does `virtual` inheritance solve subobject duplication, and which class is responsible for invoking the constructor of a `virtual` base class?
