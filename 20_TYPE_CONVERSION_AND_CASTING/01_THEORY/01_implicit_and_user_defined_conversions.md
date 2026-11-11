# 01 — Implicit Promotions and User-Defined Type Conversions

## 1. Three Classroom Type-Conversion Scenarios
1. **Basic Type to Class Type (`int -> Class`)**: Handled by a **single-argument constructor** (unless marked `explicit`).
2. **Class Type to Basic Type (`Class -> int`)**: Handled by an overloaded **conversion operator** inside the class: `operator int() const { return total_minutes; }` (note: has no return type written before `operator`, but returns `int`).
3. **Class A to Class B**: Handled either by a constructor in `Class B` taking `const A&`, or a conversion operator `operator B() const` inside `Class A`.
