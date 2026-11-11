# Detailed Solutions — Predict the Output & Debugging (Module 09)
- **Q3 Solution**: `sizeof(person)` equals `sizeof(int)` (typically `4` bytes), because `static int count` is stored once in static storage and is not part of individual `person` object instances.
- **Q4 Solution**: Calling a non-`const` member function on `const person p` attempts to pass `const person*` as the implicit `person* const this` parameter, which violates `const` qualification. Fix: declare `void display() const`.
