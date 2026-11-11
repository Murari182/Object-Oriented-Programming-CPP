# Debugging Questions — Module 16: Exception Handling

**Q7.** Identify the handler-ordering bug in the following `try`-`catch` sequence:
```cpp
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw out_of_range("Index out of bounds");
    }
    catch (const exception& e) {
        cout << "General exception\n";
    }
    catch (const out_of_range& e) {
        cout << "Out of range exception\n";
    }
    return 0;
}
```

**Q8.** Identify the memory leak when an exception is thrown in the following function and show how to fix it using RAII (`std::unique_ptr`):
```cpp
void process(int x) {
    int* buffer = new int[50];
    if (x < 0) {
        throw "Negative input";
    }
    delete[] buffer;
}
```
