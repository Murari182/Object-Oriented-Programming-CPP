# 15 — Virtual Functions and Abstraction

This module explains `virtual` functions, the `vtable` and `vptr` dispatch mechanism, pure virtual functions (`virtual void f() = 0;`), abstract base classes, `override` and `final`, and why polymorphic base classes require a `virtual` destructor.

## Directory Contents
- **Theory (`01_THEORY/`)**:
  - [`01_virtual_functions_vtable_and_vptr.md`](./01_THEORY/01_virtual_functions_vtable_and_vptr.md)
  - [`02_pure_virtual_functions_and_abstract_classes.md`](./01_THEORY/02_pure_virtual_functions_and_abstract_classes.md)
  - [`03_virtual_destructors_override_and_final.md`](./01_THEORY/03_virtual_destructors_override_and_final.md)
- **Programs (`02_PROGRAMS/`)**:
  - [`01_virtual_function_dispatch.cpp`](./02_PROGRAMS/01_virtual_function_dispatch.cpp) (Category A)
  - [`02_abstract_class_and_pure_virtual.cpp`](./02_PROGRAMS/02_abstract_class_and_pure_virtual.cpp) (Category A)
  - [`03_abstract_instantiation_compile_error.cpp`](./02_PROGRAMS/03_abstract_instantiation_compile_error.cpp) (Category B)
  - [`04_virtual_destructor_importance.cpp`](./02_PROGRAMS/04_virtual_destructor_importance.cpp) (Category A)
- **Practice Questions (`03_PRACTICE_QUESTIONS/`)** & **Detailed Solutions (`04_DETAILED_SOLUTIONS/`)**
- **Diagrams (`05_DIAGRAMS/`)**:
  - [`diagram_01_vtable_and_vptr_dispatch.svg`](./05_DIAGRAMS/diagram_01_vtable_and_vptr_dispatch.svg)
  - [`diagram_02_abstract_class_hierarchy.svg`](./05_DIAGRAMS/diagram_02_abstract_class_hierarchy.svg)
