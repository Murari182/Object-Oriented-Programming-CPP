# Detailed Solutions — Predict the Output & Debugging (Module 10: Inheritance)

### Solution to Q7
- `d.show()` calls `derived::show()` (`Derived `).
- `d.base::show()` explicitly calls `base::show()` via the scope resolution operator (`Base `).
- **Guaranteed Output**:
  ```text
  Derived Base 
  ```

### Solution to Q8
- In `class C : public B, public A`, `B` is listed before `A` in the class header.
- Therefore, constructors run `B()`, then `A()`, then `C()`.
- Destructors run in reverse: `~C()`, then `~A()`, then `~B()`.
- **Guaranteed Output**:
  ```text
  B A C ~C ~A ~B 
  ```

### Solution to Q9
- **Rule (`[class.base.init]`)**: Virtual base classes are always initialized **first**, before any non-virtual base classes!
- Step 1: `B` has a virtual base `V`, so the shared virtual base `V()` is constructed first (`V `).
- Step 2: Non-virtual bases of `D` are initialized in declaration order (`A`, then `B`).
  - `A` inherits `V` *non-virtually*, so `A`'s own separate `V` subobject is constructed (`V `), followed by `A()` (`A `).
  - `B`'s virtual base `V` was already constructed in Step 1, so `B()` runs (`B `).
- Step 3: `D()` runs (`D `).
- **Guaranteed Output**:
  ```text
  V V A B D 
  ```

### Solution to Q10 (Debugging `private` Base Member)
- **Error**: `age` is `private` in `person`, so `student::set(int)` cannot access `age` directly even with `public` inheritance.
- **Fix**: Change `private:` to `protected:` in `class person` (or provide a `public: void set_age(int)` member function in `person`).

### Solution to Q11 (Debugging Multiple Inheritance Ambiguity)
- **Error**: Both `father` and `mother` define `void greet()`, so `obj.greet()` is ambiguous.
- **Fix**: Disambiguate using the scope resolution operator in `main()`:
  ```cpp
  obj.father::greet();
  obj.mother::greet();
  ```
