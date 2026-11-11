# Debugging & Find-the-Error Questions — Module 06: Pointers and References (Questions 21–26)

### Level 2 — Intermediate

**Q21.** Identify the compile-time error in the following classroom snippet and show two ways to fix it:
```cpp
#include <iostream>
using namespace std;

class person {
public:
    int age = 20;
    void display() { cout << age << endl; }
};

int main() {
    person p;
    person* ptr = &p;
    *ptr.display(); // Find the error here
    return 0;
}
```

**Q22.** Identify all compile-time errors in the following `const` pointer code:
```cpp
int x = 10, y = 20;
const int* p1 = &x;
*p1 = 30;          // Line A
int* const p2 = &x;
p2 = &y;           // Line B
```

### Level 3 — Advanced

**Q23.** Explain the fatal runtime/undefined-behavior bug in this function and rewrite it safely:
```cpp
int* create_number(int val) {
    int temp = val;
    return &temp;
}
```

**Q24.** Identify the bug in the following dynamic array deallocation:
```cpp
int* arr = new int[50];
arr[0] = 10;
delete arr; // What is wrong here?
```

### Level 4 — University Examination Level

**Q25.** Identify why the following `void*` code fails to compile and correct it:
```cpp
double pi = 3.14159;
void* vp = &pi;
cout << *vp << endl;
```

**Q26.** Identify the subtle shallow-pointer aliasing bug when two raw pointers point to the same heap integer and both call `delete`:
```cpp
int* p1 = new int(42);
int* p2 = p1;
delete p1;
delete p2;
```
