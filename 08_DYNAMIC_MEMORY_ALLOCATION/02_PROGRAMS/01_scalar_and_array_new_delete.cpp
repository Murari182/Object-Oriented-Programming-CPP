// Program Title: Scalar new/delete and Dynamic Array new[]/delete[]
// Topic: Dynamic Memory Allocation
// Purpose: Demonstrate allocating and freeing a single int and a dynamic int array on the heap.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_stack_vs_heap_and_new_delete.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    // 1. Single integer on heap
    int* p = new int(42);
    cout << "Single heap int: " << *p << endl;
    delete p;
    p = nullptr;

    // 2. Dynamic array of integers on heap
    int n = 4;
    int* arr = new int[n]{10, 20, 30, 40};

    cout << "Dynamic heap array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}

/*
Expected Deterministic Output:
Single heap int: 42
Dynamic heap array: 10 20 30 40 
*/
