# Detailed Solutions — Predict the Output & Debugging (Module 08)
- **Q3 Solution**: `new MyClass[3]` calls the constructor 3 times (`C C C`), and `delete[]` calls the destructor 3 times (`D D D`).
- **Q4 Solution**: Two severe bugs: (1) `p = &x;` overwrites the heap address of `new int(5)`, causing a **memory leak**; (2) `delete p;` then attempts to `delete` the address of a stack variable `x`, which is **Undefined Behavior**!
