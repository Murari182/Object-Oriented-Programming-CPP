# 03 — Header Include Guards (`#ifndef` / `#define` / `#endif`)

Prevent a header file from being included multiple times in the same `.cpp` translation unit (which would violate the One Definition Rule):
```cpp
#ifndef PERSON_H
#define PERSON_H
// declarations
#endif
```
