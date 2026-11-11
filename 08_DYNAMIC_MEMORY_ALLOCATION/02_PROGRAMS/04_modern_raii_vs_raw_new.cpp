// Program Title: Classroom Raw new[]/delete[] vs. Modern std::vector
// Topic: Dynamic Memory Allocation — Modern C++ Memory Management
// Purpose: Compare manual dynamic array management with automatic std::vector cleanup.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_memory_bugs_and_raii_ownership.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 3;

    // 1. Classroom raw dynamic array
    int* raw_arr = new int[n]{5, 10, 15};
    cout << "Raw array middle: " << raw_arr[1] << endl;
    delete[] raw_arr;

    // 2. Modern C++ std::vector (automatic heap management, zero leak risk)
    vector<int> vec = {5, 10, 15};
    cout << "Vector middle: " << vec[1] << endl;

    return 0;
}

/*
Expected Deterministic Output:
Raw array middle: 10
Vector middle: 10
*/
