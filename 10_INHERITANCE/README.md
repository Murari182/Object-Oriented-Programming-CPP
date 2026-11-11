# 10 — Inheritance (Priority Deep-Dive Module)

This module provides a complete, classroom-aligned treatment of C++ Inheritance, including the three inheritance visibility modes (`public`, `protected`, `private`), detailed analysis of your two mandatory classroom `protected`-inheritance examples (`super`/`sub` and `person`/`student`), all five forms of inheritance hierarchies, constructor/destructor execution order, multiple inheritance ambiguity, and solving the Diamond Problem using `virtual` base classes.

---

## Directory Contents

### 1. Theory (`01_THEORY/`)
- [`01_inheritance_fundamentals_and_access_modes.md`](./01_THEORY/01_inheritance_fundamentals_and_access_modes.md) — Base and derived classes, `public`, `protected`, and `private` inheritance access conversion matrix.
- [`02_mandatory_classroom_examples_analysis.md`](./01_THEORY/02_mandatory_classroom_examples_analysis.md) — **Deep-Dive on Mandatory Classroom Examples 1 & 2** (`super`/`sub` and `person`/`student`), inside-derived vs. outside-derived (`main()`) accessibility rules, and compiler diagnostics.
- [`03_types_of_inheritance_and_constructor_order.md`](./01_THEORY/03_types_of_inheritance_and_constructor_order.md) — Single, multilevel, multiple, hierarchical, and hybrid inheritance; constructor/destructor call order and function overriding.
- [`04_ambiguity_diamond_problem_and_virtual_base.md`](./01_THEORY/04_ambiguity_diamond_problem_and_virtual_base.md) — Scope resolution for ambiguity (`B1::show()`), the Diamond Problem subobject duplication, and `virtual` base classes (`class D : virtual public B`).

### 2. Programs (`02_PROGRAMS/`)
- [`01_single_public_inheritance.cpp`](./02_PROGRAMS/01_single_public_inheritance.cpp) — Category A: Simple classroom `person` and `student` with `public` inheritance.
- [`02_classroom_super_sub_protected_compile_error.cpp`](./02_PROGRAMS/02_classroom_super_sub_protected_compile_error.cpp) — Category B: **Mandatory Classroom Example 1** (`obj.show()` intentional compilation error under `protected` inheritance).
- [`03_classroom_super_sub_fixed_public.cpp`](./02_PROGRAMS/03_classroom_super_sub_fixed_public.cpp) — Category A: Corrected Classroom Example 1 using `public` inheritance.
- [`04_classroom_super_sub_fixed_wrapper.cpp`](./02_PROGRAMS/04_classroom_super_sub_fixed_wrapper.cpp) — Category A: Corrected Classroom Example 1 keeping `protected` inheritance and adding a `public` member function inside `sub`.
- [`05_classroom_person_student_compile_error.cpp`](./02_PROGRAMS/05_classroom_person_student_compile_error.cpp) — Category B: **Mandatory Classroom Example 2** (`s.input(40)` fails in `main()`, while `display()` calling `input(30)` succeeds).
- [`06_classroom_person_student_corrected.cpp`](./02_PROGRAMS/06_classroom_person_student_corrected.cpp) — Category A: Corrected Classroom Example 2 demonstrating valid `s.display()` execution.
- [`07_multilevel_and_constructor_order.cpp`](./02_PROGRAMS/07_multilevel_and_constructor_order.cpp) — Category A: Constructor and destructor invocation order in a 3-level hierarchy.
- [`08_diamond_problem_virtual_base.cpp`](./02_PROGRAMS/08_diamond_problem_virtual_base.cpp) — Category A: Solving the Diamond Problem with `virtual public` inheritance.

### 3. Practice Questions (`03_PRACTICE_QUESTIONS/`)
- [`conceptual_questions.md`](./03_PRACTICE_QUESTIONS/conceptual_questions.md)
- [`predict_the_output.md`](./03_PRACTICE_QUESTIONS/predict_the_output.md)
- [`debugging_questions.md`](./03_PRACTICE_QUESTIONS/debugging_questions.md)
- [`programming_questions.md`](./03_PRACTICE_QUESTIONS/programming_questions.md)

### 4. Detailed Solutions (`04_DETAILED_SOLUTIONS/`)
- [`conceptual_solutions.md`](./04_DETAILED_SOLUTIONS/conceptual_solutions.md)
- [`output_solutions.md`](./04_DETAILED_SOLUTIONS/output_solutions.md)
- [`programming_solutions.md`](./04_DETAILED_SOLUTIONS/programming_solutions.md)

### 5. Technical Diagrams (`05_DIAGRAMS/`)
- [`diagram_01_access_specifier_transformation.svg`](./05_DIAGRAMS/diagram_01_access_specifier_transformation.svg)
- [`diagram_02_classroom_protected_inheritance.svg`](./05_DIAGRAMS/diagram_02_classroom_protected_inheritance.svg)
- [`diagram_03_inheritance_types_and_diamond.svg`](./05_DIAGRAMS/diagram_03_inheritance_types_and_diamond.svg)
