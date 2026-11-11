# B.Tech Mathematics & Computing — C++ Study Roadmap

## 1. Learning Progression & Prerequisites

```text
[01 Fundamentals] ──> [02 Data Types] ──> [03 Operators & Sequencing] ──> [04 Control Flow]
                                                                                 │
       ┌─────────────────────────────────────────────────────────────────────────┘
       ▼
[05 Functions] ──> [06 Pointers & References] ──> [07 Arrays & Strings] ──> [08 Dynamic Memory]
                            │
                            ▼
                [09 Classes & Objects]
                   ├──> [13 Constructors & Destructors]
                   ├──> [14 Friend Functions & Classes]
                   ├──> [12 Operator Overloading]
                   └──> [10 Inheritance] ──> [11 Polymorphism] ──> [15 Virtual Functions & Abstraction]
                                                                             │
       ┌─────────────────────────────────────────────────────────────────────┘
       ▼
[16 Exception Handling] ──> [17 File Handling] ──> [18 Templates] ──> [19 Namespaces] ──> [20 Casting] ──> [21 STL & C++23]
```

---

## 2. How to Study Each Module

For every topic directory (`01` through `21`):

1. **Read `01_THEORY/` in Numerical Order**:
   - Start with `01_topic_introduction.md` for intuition, real-world analogy, and why the feature exists.
   - Study `02_core_concepts.md` and `03_syntax_and_rules.md` alongside the SVG diagrams in `05_DIAGRAMS/`.
2. **Trace `02_PROGRAMS/` Before Running**:
   - Read the program from `int main()` line by line.
   - Trace variable values on paper using the dry-run method taught in the theory files.
   - Compare Category B (`_compile_error.cpp`) files against their corrected Category A counterparts to understand *why* the compiler rejects specific code.
3. **Solve `03_PRACTICE_QUESTIONS/` Without Looking at Solutions**:
   - Attempt the **Conceptual**, **Predict the Output**, **Debugging**, and **Programming** questions on paper (simulating university written exams).
4. **Verify Against `04_DETAILED_SOLUTIONS/`**:
   - Check not just the final answer, but the *exact C++ standard rule* (e.g., access conversion rules, operator precedence vs. sequencing, stack unwinding order).

---

## 3. University Exam & Viva Preparation Strategy

- **Mid-Semester Exam Focus**: Modules `01` through `10` and `13` (Pointers, Arrays, Classes, Constructors/Destructors, and Inheritance access specifiers).
- **End-Semester Exam Focus**: Modules `10` through `21` (Inheritance ambiguity/virtual base classes, Operator Overloading, Runtime Polymorphism & vtables, Exception Handling & Stack Unwinding, File Handling, Templates, and STL).
- **Practical Lab & Viva Focus**: Modules `22_PROGRAMMING_PRACTICE`, `23_LAB_PROGRAMS`, `24_THEORY_AND_VIVA_QUESTIONS`, and `25_REVISION_NOTES`.
