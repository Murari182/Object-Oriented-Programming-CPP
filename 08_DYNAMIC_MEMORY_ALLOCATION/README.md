# 08 — Dynamic Memory Allocation

This module explains stack vs. free-store (heap) memory layout, scalar `new`/`delete`, array `new[]`/`delete[]`, memory leaks, dangling pointers, double deletion, and modern RAII alternatives (`std::unique_ptr` and `std::vector`).

## Directory Contents
- **Theory (`01_THEORY/`)**:
  - [`01_stack_vs_heap_and_new_delete.md`](./01_THEORY/01_stack_vs_heap_and_new_delete.md)
  - [`02_dynamic_arrays_and_objects.md`](./01_THEORY/02_dynamic_arrays_and_objects.md)
  - [`03_memory_bugs_and_raii_ownership.md`](./01_THEORY/03_memory_bugs_and_raii_ownership.md)
- **Programs (`02_PROGRAMS/`)**:
  - [`01_scalar_and_array_new_delete.cpp`](./02_PROGRAMS/01_scalar_and_array_new_delete.cpp) (Category A)
  - [`02_dynamic_classroom_person_objects.cpp`](./02_PROGRAMS/02_dynamic_classroom_person_objects.cpp) (Category A)
  - [`03_mismatched_delete_ub.cpp`](./02_PROGRAMS/03_mismatched_delete_ub.cpp) (Category D)
  - [`04_modern_raii_vs_raw_new.cpp`](./02_PROGRAMS/04_modern_raii_vs_raw_new.cpp) (Category A)
- **Practice Questions (`03_PRACTICE_QUESTIONS/`)** & **Detailed Solutions (`04_DETAILED_SOLUTIONS/`)**
- **Diagrams (`05_DIAGRAMS/`)**:
  - [`diagram_01_stack_vs_heap_memory.svg`](./05_DIAGRAMS/diagram_01_stack_vs_heap_memory.svg)
  - [`diagram_02_dangling_and_leak.svg`](./05_DIAGRAMS/diagram_02_dangling_and_leak.svg)
