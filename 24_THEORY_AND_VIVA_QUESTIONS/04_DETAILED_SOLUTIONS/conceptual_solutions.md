# Mock University Examination Solutions — Module 24
1. Because `protected` inheritance converts `person`'s `public` member `input()` into a `protected` member of `student`, which is accessible inside `student` member functions (`display()`) but inaccessible to external code (`main()`).
2. Given `arr = {10, 20, 30}` and `p = &arr[1]` (`20`): `*p++` returns `20` and advances `p` to `&arr[2]` (`*p == 30`); `*++p` advances `p` to `&arr[2]` first and returns `30` (`*p == 30`).
3. See Module 15 (`01_virtual_functions_vtable_and_vptr.md`) for full diagram and explanation.
