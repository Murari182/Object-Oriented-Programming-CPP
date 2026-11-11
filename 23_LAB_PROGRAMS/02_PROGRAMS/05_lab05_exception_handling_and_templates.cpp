// Program Title: Lab Experiment 5 — Generic Function Template With Exception Handling
// Topic: Lab Programs — Templates and Exceptions
// Purpose: University Lab Practical 5 combining function templates with try-throw-catch.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_lab_manual_index_and_guidelines.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

template <typename T>
T safe_divide(T a, T b) {
    if (b == 0) {
        throw "Division by zero!";
    }
    return a / b;
}

int main() {
    try {
        cout << safe_divide(20, 5) << endl;
        cout << safe_divide(10, 0) << endl;
    }
    catch (const char* err) {
        cout << "Exception: " << err << endl;
    }
    return 0;
}

/*
Expected Deterministic Output:
4
Exception: Division by zero!
*/
