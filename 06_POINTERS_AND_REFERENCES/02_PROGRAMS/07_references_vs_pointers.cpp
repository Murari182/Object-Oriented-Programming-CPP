// Program Title: Swapping Variables Using Pointers vs. References
// Topic: Pointers and References — Call by Address vs. Call by Reference
// Purpose: Compare pointer-based swap (explicit '&' and '*') with reference-based swap (clean aliasing).
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/05_references_and_pointer_comparison.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

void swap_by_pointer(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_by_reference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10;
    int b = 20;

    swap_by_pointer(&a, &b);
    cout << "After swap_by_pointer: a=" << a << ", b=" << b << endl;

    swap_by_reference(a, b);
    cout << "After swap_by_reference: a=" << a << ", b=" << b << endl;

    return 0;
}

/*
Expected Deterministic Output:
After swap_by_pointer: a=20, b=10
After swap_by_reference: a=10, b=20
*/
