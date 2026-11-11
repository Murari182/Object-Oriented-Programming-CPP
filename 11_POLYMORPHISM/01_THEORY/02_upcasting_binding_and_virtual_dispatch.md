# 02 — Upcasting (`super* ptr = &sub_obj;`) and Static vs. Dynamic Binding

When a base class pointer points to a derived class object:
```cpp
super* ptr;
sub obj;
ptr = &obj; // Upcasting (always safe and implicit under public inheritance)
ptr->show();
```
- **If `super::show()` is NOT `virtual` (Static Binding)**: The compiler looks only at the pointer's static type (`super*`) and calls `super::show()`.
- **If `super::show()` IS `virtual` (Dynamic Binding)**: The program looks up the object's vtable at runtime and calls `sub::show()`.
