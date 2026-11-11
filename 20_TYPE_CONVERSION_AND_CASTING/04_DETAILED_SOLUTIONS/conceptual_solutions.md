# Detailed Solutions — Conceptual Questions (Module 20)
- **Q1 Solution**: `static_cast` performs compile-time conversion without runtime type checking; `dynamic_cast` inspects the object's RTTI (stored via the class's `vtable`, which is why a polymorphic `virtual` function is required) at runtime.
- **Q2 Solution**: Modifying an object that was originally declared `const` through a `const_cast` pointer is **Undefined Behavior** (`[dcl.type.cv]`).
