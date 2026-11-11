# Detailed Solutions — Predict the Output & Debugging (Module 17)
- **Q3 Solution**: `eofbit` is only set *after* an input operation attempts to read past EOF and fails. Use `while (fin >> var)` instead.
- **Q4 Solution**: Classes with `std::string` store a heap pointer inside the object, and polymorphic classes store a `vptr`; raw byte dumping writes memory addresses that are invalid when read back in another process. Only trivially copyable structs/classes can use raw `read`/`write`.
