// Program Title: Compile-Time Constants Using constexpr and const
// Topic: Data Types and Variables — const and constexpr
// Purpose: Use a constexpr constant as a compile-time array size bound.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_const_constexpr_and_auto.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    constexpr int SIZE = 4;
    int squares[SIZE] = {1, 4, 9, 16};

    for (int i = 0; i < SIZE; i++) {
        cout << squares[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
Expected Deterministic Output:
1 4 9 16 
*/
