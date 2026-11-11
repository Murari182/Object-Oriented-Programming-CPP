# 03 — `dynamic_cast` Failure Behavior: Pointer vs. Reference

When a downcast `dynamic_cast<Derived*>(base_ptr)` fails at runtime (because `base_ptr` does not actually point to a `Derived` object):
- **Pointer `dynamic_cast<Derived*>(base_ptr)`**: Returns **`nullptr`**.
- **Reference `dynamic_cast<Derived&>(base_ref)`**: Throws **`std::bad_cast`** (`#include <typeinfo>`) because there is no such thing as a null reference!
