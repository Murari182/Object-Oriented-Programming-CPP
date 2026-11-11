# Detailed Solutions — Conceptual Questions (Module 09)
- **Q1 Solution**: `sizeof(Empty)` is at least `1` byte so that two distinct objects of type `Empty` (e.g., in an array `Empty arr[2]`) are guaranteed by the C++ standard to have distinct memory addresses (`&arr[0] != &arr[1]`).
- **Q2 Solution**: A `static` member function belongs to the class as a whole and can be invoked without any object instance (`MyClass::func()`), so there is no invoking object for `this` to point to.
