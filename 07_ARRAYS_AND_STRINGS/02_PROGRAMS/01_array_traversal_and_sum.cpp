// Program Title: 1D Array Traversal, Sum, and Maximum Element
// Topic: Arrays and Strings — 1D Arrays
// Purpose: Demonstrate declaring, initializing, and scanning a 1D integer array in classroom style.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_1d_and_2d_arrays_memory_layout.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int marks[5] = {78, 92, 85, 64, 96};
    int sum = 0;
    int max_mark = marks[0];

    for (int i = 0; i < 5; i++) {
        sum = sum + marks[i];
        if (marks[i] > max_mark) {
            max_mark = marks[i];
        }
    }

    cout << "Total Sum: " << sum << endl;
    cout << "Highest Mark: " << max_mark << endl;

    return 0;
}

/*
Expected Deterministic Output:
Total Sum: 415
Highest Mark: 96
*/
