# 01 — Constructors, Constructor Overloading, and Member Initializer Lists

## 1. Properties of a Constructor
- Has the **exact same name** as the class.
- Has **no return type** (not even `void`).
- Invoked automatically when an object is created.
- If you define **any** parameterized constructor, the compiler **suppresses** the implicitly-declared default constructor (unless you restore it with `person() = default;`).

## 2. When Member Initializer Lists (`: member(val)`) Are Mandatory
1. Initializing **`const` data members** (`const int id;`).
2. Initializing **reference data members** (`int& ref;`).
3. Initializing **base classes** or **member objects** that lack a default constructor.
4. **Initialization Order Rule**: Data members are always initialized in the **exact order they are declared inside the class**, **not** the order written in the member initializer list!
