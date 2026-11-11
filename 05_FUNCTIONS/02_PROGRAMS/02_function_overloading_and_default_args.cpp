// Program Title: Function Overloading and Default Arguments
// Topic: Functions — Overloading & Default Parameters
// Purpose: Demonstrate overloaded area() functions and trailing default arguments.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_default_arguments_inline_and_overloading.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int breadth) {
    return length * breadth;
}

int compute_interest(int principal, int rate = 5) {
    return (principal * rate) / 100;
}

int main() {
    cout << "Square area: " << area(6) << endl;
    cout << "Rectangle area: " << area(6, 4) << endl;
    cout << "Default interest: " << compute_interest(1000) << endl;
    return 0;
}

/*
Expected Deterministic Output:
Square area: 36
Rectangle area: 24
Default interest: 50
*/
