# 16 — Exception Handling (Priority Deep-Dive Module)

This module provides a complete, exam-focused and standard-accurate treatment of C++ Exception Handling, including `try`-`throw`-`catch` control flow, stack unwinding, rethrowing (`throw;`), standard and custom exception hierarchies, RAII resource safety, `noexcept`, and the three formal Exception Safety Guarantees (Basic, Strong, and No-Throw).

---

## Directory Contents

### 1. Theory (`01_THEORY/`)
- [`01_exceptions_try_throw_catch_fundamentals.md`](./01_THEORY/01_exceptions_try_throw_catch_fundamentals.md) — Errors vs. exceptions, `try`, `throw`, `catch`, multiple `catch` blocks, and catch-all (`catch (...)`).
- [`02_propagation_stack_unwinding_and_rethrow.md`](./01_THEORY/02_propagation_stack_unwinding_and_rethrow.md) — Exception propagation across call frames, deterministic destructor invocation during **Stack Unwinding**, nested `try` blocks, and `throw;` vs `throw e;`.
- [`03_standard_and_custom_exception_classes.md`](./01_THEORY/03_standard_and_custom_exception_classes.md) — `<stdexcept>` hierarchy (`std::exception`, `runtime_error`, `logic_error`, `bad_alloc`), catching by `const` reference (`catch (const exception& e)`), and writing custom classroom exception classes.
- [`04_raii_noexcept_and_exception_safety_guarantees.md`](./01_THEORY/04_raii_noexcept_and_exception_safety_guarantees.md) — Resource Acquisition Is Initialization (RAII), why raw `new` leaks during exceptions, `noexcept` specifier, and the **Basic**, **Strong**, and **No-Throw** exception safety guarantees.

### 2. Programs (`02_PROGRAMS/`)
- [`01_division_by_zero_try_catch.cpp`](./02_PROGRAMS/01_division_by_zero_try_catch.cpp) — Category A: Classroom division-by-zero exception handling using `try`, `throw`, and `catch`.
- [`02_multiple_catch_and_catch_all.cpp`](./02_PROGRAMS/02_multiple_catch_and_catch_all.cpp) — Category A: Multiple typed `catch` handlers (`int`, `const char*`) and `catch (...)`.
- [`03_stack_unwinding_and_rethrow.cpp`](./02_PROGRAMS/03_stack_unwinding_and_rethrow.cpp) — Category A: Observing automatic destructor calls during stack unwinding and rethrowing with `throw;`.
- [`04_custom_exception_and_noexcept.cpp`](./02_PROGRAMS/04_custom_exception_and_noexcept.cpp) — Category A: Classroom `bank_account` with custom exception class and `noexcept` balance query.
- [`05_uncaught_exception_runtime_error.cpp`](./02_PROGRAMS/05_uncaught_exception_runtime_error.cpp) — Category C: Runtime-error demonstration when a thrown exception has no matching `catch` block (`std::terminate`).

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
- [`diagram_01_exception_handling_flowchart.svg`](./05_DIAGRAMS/diagram_01_exception_handling_flowchart.svg)
- [`diagram_02_stack_unwinding_raii.svg`](./05_DIAGRAMS/diagram_02_stack_unwinding_raii.svg)
