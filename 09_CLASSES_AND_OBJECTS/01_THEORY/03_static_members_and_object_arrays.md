# 03 — `static` Data Members, `static` Member Functions, and Object Size

## 1. `static` Data Members
A `static` data member is shared by **all** objects of the class (stored once in static memory, not inside each object):
- In C++17 / C++20 / C++23, you can initialize a `static` data member right inside the class using `inline static int count = 0;`.
- Because `static` data members are not part of individual objects, they do **not** contribute to `sizeof(MyClass)`.

## 2. `static` Member Functions
- Can be called using the class name without any object: `person::show_count();`.
- Have **no `this` pointer** and therefore **cannot** access non-static data members (`age`) or call non-static member functions directly!
