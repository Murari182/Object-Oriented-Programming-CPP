# 06 — Pointers and References (Priority Deep-Dive Module)

Pointers and references form the backbone of memory manipulation, indirect access, dynamic data structures, and runtime polymorphism in C++. This module provides an exhaustive, exam-ready and standard-accurate treatment of pointers, references, and the 13 classic pointer arithmetic/dereference expressions.

---

## Directory Contents

### 1. Theory (`01_THEORY/`)
- [`01_pointers_fundamentals_and_memory.md`](./01_THEORY/01_pointers_fundamentals_and_memory.md) — Definition, intuition, address-of (`&`), dereference (`*`), `nullptr`, `void*`, and pointer-to-pointer (`int**`).
- [`02_pointer_arithmetic_and_13_expressions.md`](./01_THEORY/02_pointer_arithmetic_and_13_expressions.md) — **Dedicated 13-Expression Analysis** (`*p++`, `(*p)++`, `++*p`, `*++p`, `++(*p)`, `*(++p)`, `*p--`, `(*p)--`, `--*p`, `*--p`, `*(p + 1)`, `*(p - 1)`, `*p + 1`), precedence vs. sequencing rules, and why `*p++ + *p++` has Undefined Behavior.
- [`03_const_pointers_arrays_functions_objects.md`](./01_THEORY/01_pointers_fundamentals_and_memory.md) — `const` pointers vs. pointers to `const`, array decay, function parameters, C-strings, and pointers to classroom objects (`->`).
- [`04_memory_hazards_and_smart_pointers.md`](./01_THEORY/04_memory_hazards_and_smart_pointers.md) — Wild pointers, dangling pointers, memory leaks, double deletion, and modern C++ smart pointers (`std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`).
- [`05_references_and_pointer_comparison.md`](./01_THEORY/05_references_and_pointer_comparison.md) — References (`int&`), aliasing rules, and a side-by-side comparison of pointers vs. references.

### 2. Programs (`02_PROGRAMS/`)
- [`01_pointer_basics.cpp`](./02_PROGRAMS/01_pointer_basics.cpp) — Category A: Address-of, dereference, and indirect modification.
- [`02_thirteen_pointer_expressions.cpp`](./02_PROGRAMS/02_thirteen_pointer_expressions.cpp) — Category A: Independent verification of all 13 pointer expressions on a known array `{10, 20, 30}`.
- [`03_unsequenced_pointer_ub.cpp`](./02_PROGRAMS/03_unsequenced_pointer_ub.cpp) — Category D: Demonstration and explanation of Undefined Behavior in `*p++ + *p++`.
- [`04_const_pointer_variations.cpp`](./02_PROGRAMS/04_const_pointer_variations.cpp) — Category A: Pointer to `const`, `const` pointer, and `const` pointer to `const`.
- [`05_const_pointer_compile_error.cpp`](./02_PROGRAMS/05_const_pointer_compile_error.cpp) — Category B: Intentional compile-time error when mutating through `const int*` or reassigning `int* const`.
- [`06_pointer_to_pointer_and_objects.cpp`](./02_PROGRAMS/06_pointer_to_pointer_and_objects.cpp) — Category A: Double pointers (`int**`) and pointers to a classroom `person` object.
- [`07_references_vs_pointers.cpp`](./02_PROGRAMS/07_references_vs_pointers.cpp) — Category A: Swapping values using references vs. pointers.
- [`08_smart_pointers_modern_cpp.cpp`](./02_PROGRAMS/08_smart_pointers_modern_cpp.cpp) — Category A: Classroom `person` managed safely with `std::unique_ptr` and `std::shared_ptr`.

### 3. Practice Questions (`03_PRACTICE_QUESTIONS/`) — 32 Graded Questions
- [`conceptual_questions.md`](./03_PRACTICE_QUESTIONS/conceptual_questions.md) — Questions 1 to 10 (Levels 1–4).
- [`predict_the_output.md`](./03_PRACTICE_QUESTIONS/predict_the_output.md) — Questions 11 to 20 (Levels 1–4).
- [`debugging_questions.md`](./03_PRACTICE_QUESTIONS/debugging_questions.md) — Questions 21 to 26 (Levels 2–4).
- [`programming_questions.md`](./03_PRACTICE_QUESTIONS/programming_questions.md) — Questions 27 to 32 (Levels 2–4).

### 4. Detailed Solutions (`04_DETAILED_SOLUTIONS/`)
- [`conceptual_solutions.md`](./04_DETAILED_SOLUTIONS/conceptual_solutions.md) — Detailed answers for Q1–Q10.
- [`output_solutions.md`](./04_DETAILED_SOLUTIONS/output_solutions.md) — Step-by-step dry runs and solutions for Q11–Q26.
- [`programming_solutions.md`](./04_DETAILED_SOLUTIONS/programming_solutions.md) — Complete classroom-style C++23 code and dry runs for Q27–Q32.

### 5. Technical Diagrams (`05_DIAGRAMS/`)
- [`diagram_01_pointer_memory_model.svg`](./05_DIAGRAMS/diagram_01_pointer_memory_model.svg)
- [`diagram_02_thirteen_pointer_expressions.svg`](./05_DIAGRAMS/diagram_02_thirteen_pointer_expressions.svg)
- [`diagram_03_pointer_to_pointer.svg`](./05_DIAGRAMS/diagram_03_pointer_to_pointer.svg)
- [`diagram_04_const_pointer_matrix.svg`](./05_DIAGRAMS/diagram_04_const_pointer_matrix.svg)
