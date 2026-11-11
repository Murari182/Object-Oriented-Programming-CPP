# 19 — Namespaces and the Preprocessor

This module covers declaring custom `namespace` scopes, resolving name collisions with `::`, `using` declarations vs. `using` directives, anonymous namespaces, `#include` header guards, and why `constexpr`/`inline` functions should replace `#define` macros.

## Directory Contents
- **Theory (`01_THEORY/`)**:
  - [`01_namespaces_and_scope_resolution.md`](./01_THEORY/01_namespaces_and_scope_resolution.md)
  - [`02_preprocessor_directives_and_macro_pitfalls.md`](./01_THEORY/02_preprocessor_directives_and_macro_pitfalls.md)
  - [`03_header_guards_and_translation_units.md`](./01_THEORY/03_header_guards_and_translation_units.md)
- **Programs (`02_PROGRAMS/`)**:
  - [`01_custom_namespaces_resolution.cpp`](./02_PROGRAMS/01_custom_namespaces_resolution.cpp) (Category A)
  - [`02_macro_pitfall_vs_constexpr_inline.cpp`](./02_PROGRAMS/02_macro_pitfall_vs_constexpr_inline.cpp) (Category A)
  - [`03_namespace_collision_compile_error.cpp`](./02_PROGRAMS/03_namespace_collision_compile_error.cpp) (Category B)
- **Practice Questions (`03_PRACTICE_QUESTIONS/`)** & **Detailed Solutions (`04_DETAILED_SOLUTIONS/`)**
- **Diagrams (`05_DIAGRAMS/`)**: [`diagram_01_namespace_scopes.svg`](./05_DIAGRAMS/diagram_01_namespace_scopes.svg)
