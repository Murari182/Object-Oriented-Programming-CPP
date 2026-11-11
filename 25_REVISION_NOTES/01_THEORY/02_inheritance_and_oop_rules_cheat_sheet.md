# 02 — Rapid Revision: Inheritance, Operator Overloading, and Exceptions

1. **Inheritance Visibility**:
   - `: public Base` -> `public` stays `public`, `protected` stays `protected`.
   - `: protected Base` -> `public` and `protected` both become `protected` in Derived (accessible inside Derived methods like `display()`, **illegal** in `main()` via `obj.member()`).
   - `: private Base` -> `public` and `protected` both become `private` in Derived.
2. **Operator Overloading**:
   - Cannot overload: `::`, `.`, `.*`, `?:`, `sizeof`, `typeid`, `alignof`, `noexcept`.
   - Must be member functions: `=`, `[]`, `()`, `->`.
   - `c1 + c2` calls `c1.operator+(c2)` (member) or `operator+(c1, c2)` (`friend`).
3. **Exception Guarantees**:
   - **Basic** (no leaks, valid invariants), **Strong** (commit-or-rollback), **No-Throw** (`noexcept`).
