// Program Title: 2D Array Matrix Addition (2x2)
// Topic: Arrays and Strings — 2D Arrays
// Purpose: Demonstrate nested-loop matrix addition using 2D arrays in classroom style.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_1d_and_2d_arrays_memory_layout.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Result Matrix C:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Expected Deterministic Output:
Result Matrix C:
6 8 
10 12 
*/
