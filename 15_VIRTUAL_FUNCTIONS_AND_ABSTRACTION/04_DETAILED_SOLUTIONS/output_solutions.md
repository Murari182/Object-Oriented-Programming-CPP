# Detailed Solutions — Predict the Output & Debugging (Module 15)
- **Q3 Solution**: Adding the first `virtual` function adds one hidden `vptr` (8 bytes on a 64-bit system, plus any alignment padding) to every object of `MyClass`. Adding a second or third `virtual` function adds entries to the class's static `vtable` without adding any more pointers to the object itself!
- **Q4 Solution**: Any derived class that leaves even one inherited pure virtual function un-overridden remains an **abstract class** itself and cannot be instantiated.
