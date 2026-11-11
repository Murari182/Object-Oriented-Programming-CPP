# Programming Questions — Module 06: Pointers and References (Questions 27–32)

### Level 2 — Intermediate

**Q27.** Write a C++23 program in classroom style that reverses an integer array in-place using only two pointers (`left` and `right`) and pointer arithmetic (`left++`, `right--`), without using array subscript brackets `[]` inside the loop.

**Q28.** Write a C++23 program with a function `void compute_stats(const int* arr, int n, int& min_val, int& max_val, int& sum)` that scans an array using a pointer to `const int` and returns the minimum, maximum, and sum through reference parameters.

### Level 3 — Advanced

**Q29.** Write a C++23 program using a classroom `student` class (`roll`, `marks`, `input()`, `display()`) that creates an array of 3 `student` objects and iterates through them using a `student*` pointer (`ptr->input(...)`, `ptr->display()`).

**Q30.** Write a C++23 program that demonstrates a function returning a reference (`int& get_element(int* arr, int index)`) so that the function call can appear on the **left-hand side** of an assignment statement (`get_element(arr, 1) = 99;`).

### Level 4 — University Examination Level

**Q31.** Write a C++23 program that counts the length of a C-style string and counts the number of vowels using a `const char*` pointer and the `*p++` idiom.

**Q32.** Write a C++23 program that demonstrates managing a dynamically allocated classroom `person` object first using raw `new`/`delete` and then using `std::unique_ptr<person>`.
