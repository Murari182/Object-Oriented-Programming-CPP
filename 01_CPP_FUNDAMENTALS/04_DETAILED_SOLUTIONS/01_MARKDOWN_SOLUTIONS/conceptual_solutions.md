# Detailed Solutions — Conceptual Questions (Module 01)
- **Q1 Solution**: (1) Preprocessing expands `#include` and macros; (2) Compilation checks syntax/types and produces assembly; (3) Assembly produces machine object code (`.o`); (4) Linking combines object files and libraries into an executable.
- **Q2 Solution**: ISO C++ `[basic.start.main]` mandates `int main()` so the program returns an exit status code to the operating system. If `return` is omitted at the end of `main()`, `return 0;` is implicitly executed.
