# 12 — Operator Overloading (Priority Deep-Dive Module)

This module covers C++ Operator Overloading from classroom fundamentals to standard-level edge cases, featuring the mandatory `complex_system` class (`Show_Num()`, `operator+()`, `c1 + c2`, and `c1.operator+(c2)`), unary prefix/postfix overloading, member vs. `friend` overloads, and signed integer overflow rules (`INT_MIN` negation UB).

---

## Directory Contents

### 1. Theory (`01_THEORY/`)
- [`01_operator_overloading_fundamentals_and_rules.md`](./01_THEORY/01_operator_overloading_fundamentals_and_rules.md) — Meaning, intuition, syntax (`operator@`), operators that can and cannot be overloaded, and arity/precedence preservation rules.
- [`02_mandatory_complex_system_and_overflow_analysis.md`](./01_THEORY/02_mandatory_complex_system_and_overflow_analysis.md) — **Mandatory `complex_system` Deep-Dive** (`Show_Num()`, `operator+()`, implicit `c1 + c2` vs. explicit `c1.operator+(c2)`), plus signed integer overflow UB and the `INT_MIN` negation edge case when formatting negative imaginary parts.
- [`03_unary_and_binary_member_vs_friend.md`](./01_THEORY/03_unary_and_binary_member_vs_friend.md) — Unary prefix (`++obj`) vs. postfix (`obj++` with dummy `int`), member vs. `friend` binary overloads, and why `10 + c1` requires a non-member overload.
- [`04_special_operators_stream_and_assignment.md`](./01_THEORY/04_special_operators_stream_and_assignment.md) — Stream insertion/extraction (`<<`, `>>`), copy assignment (`=`), subscript (`[]`), and C++20/23 three-way comparison (`<=>`).

### 2. Programs (`02_PROGRAMS/`)
- [`01_classroom_complex_system.cpp`](./02_PROGRAMS/01_classroom_complex_system.cpp) — Category A: **Mandatory `complex_system` Classroom Program** demonstrating constructor initialization, `Show_Num()`, `operator+()`, `c1 + c2`, and `c1.operator+(c2)`.
- [`02_complex_system_overflow_edge_case.cpp`](./02_PROGRAMS/02_complex_system_overflow_edge_case.cpp) — Category D / Safe Alternative: Demonstration and safe fix for signed integer overflow (`INT_MIN` negation) in `complex_system`.
- [`03_unary_prefix_and_postfix_overload.cpp`](./02_PROGRAMS/03_unary_prefix_and_postfix_overload.cpp) — Category A: Overloading unary `-`, prefix `++`, and postfix `++(int)` in a classroom `counter` class.
- [`04_friend_binary_and_stream_overload.cpp`](./02_PROGRAMS/04_friend_binary_and_stream_overload.cpp) — Category A: Overloading `operator+` and `operator<<` using `friend` functions.
- [`05_invalid_operator_overload_compile_error.cpp`](./02_PROGRAMS/05_invalid_operator_overload_compile_error.cpp) — Category B: Intentional compile-time error demonstrating why `operator+` as a member function cannot take two explicit parameters.

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
- [`diagram_01_complex_system_operator_plus.svg`](./05_DIAGRAMS/diagram_01_complex_system_operator_plus.svg)
- [`diagram_02_member_vs_friend_overload.svg`](./05_DIAGRAMS/diagram_02_member_vs_friend_overload.svg)
