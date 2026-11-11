# 03 — Converting Outdated Classroom C++ into Modern C++23

| Outdated / Legacy Classroom Syntax | Modern C++23 Standard Syntax | Reason for Change |
| :--- | :--- | :--- |
| `#include <iostream.h>` | `#include <iostream>` | Pre-1998 header removed from ISO C++ |
| `#include <conio.h>` / `clrscr()` / `getch()` | Omit (not needed in modern terminals) | Non-standard MS-DOS specific header |
| `void main()` | `int main()` | ISO C++ `[basic.start.main]` requires `int` |
| `int* p = NULL;` | `int* p = nullptr;` | Type-safe `std::nullptr_t` keyword |
| `char name[20]; gets(name);` | `std::string name; std::getline(cin, name);` | `gets()` was removed in C++14 due to buffer overflow vulnerabilities |
