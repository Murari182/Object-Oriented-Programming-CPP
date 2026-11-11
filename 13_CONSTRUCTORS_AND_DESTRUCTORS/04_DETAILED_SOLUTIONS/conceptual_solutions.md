# Detailed Solutions — Conceptual Questions (Module 13)
- **Q1 Solution**: Passing the parameter by value would require copying the argument, which calls the copy constructor itself, leading to infinite recursion.
- **Q2 Solution**: (1) `const` non-static data members, (2) reference data members (`T&`), and (3) base classes or member subobjects that lack a default constructor.
