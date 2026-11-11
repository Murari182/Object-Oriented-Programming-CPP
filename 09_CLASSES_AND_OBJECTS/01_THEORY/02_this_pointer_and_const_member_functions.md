# 02 — The `this` Pointer and `const` Member Functions

## 1. What is the `this` Pointer?
Every non-static member function receives an implicit hidden pointer named `this` holding the address of the object on which the member function was called:
- Inside `void person::input(int age)`, if the parameter name `age` shadows the member variable `age`, you write `this->age = age;`.
- Returning `*this` by reference (`person&`) enables **method chaining** (`p.set_age(20).display()`).

## 2. `const` Member Functions (`void display() const`)
Placing `const` after the parameter list changes the type of `this` from `person* const` to `const person* const`:
- Guarantees the member function will **not** modify any non-`mutable` data member of the object.
- **Crucial Rule**: A `const` object (`const person p;`) can **ONLY** call `const` member functions! Calling a non-`const` member function on a `const` object is a compilation error.
