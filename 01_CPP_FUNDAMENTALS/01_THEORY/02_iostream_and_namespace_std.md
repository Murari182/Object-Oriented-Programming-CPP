# 02 — Input/Output Streams (`cin`, `cout`, `endl`) and `namespace std`

## 1. `<iostream>` Stream Objects
- `std::cout`: Standard character output stream (buffered), paired with the stream insertion operator `<<`.
- `std::cin`: Standard character input stream, paired with the stream extraction operator `>>` (skips leading whitespace).
- `std::endl` vs `'\n'`: `endl` outputs a newline `'\n'` **and flushes** the output buffer (`std::flush`). In performance-critical loops, `'\n'` is faster; in classroom programs, `endl` is convenient and clear.

## 2. `using namespace std;` vs. `std::` Qualification
- In simple single-file classroom programs, `using namespace std;` keeps code concise for written exams.
- In multi-file professional projects or header files (`.h` / `.hpp`), **never** write `using namespace std;` at global scope because it pulls thousands of identifiers (`count`, `distance`, `max`, `swap`) into the global namespace and causes name collisions!
