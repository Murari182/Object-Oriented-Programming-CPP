// Program Title: Integer Division vs. Floating-Point Division and Modulo
// Topic: Operators and Expressions
// Purpose: Show truncation in 7 / 2 vs. exact division in 7.0 / 2.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_arithmetic_relational_and_short_circuit.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 2;
    cout << "Integer division (7 / 2): " << (a / b) << endl;
    cout << "Remainder (7 % 2): " << (a % b) << endl;
    cout << "Floating division (7.0 / 2): " << (static_cast<double>(a) / b) << endl;
    return 0;
}

/*
Expected Deterministic Output:
Integer division (7 / 2): 3
Remainder (7 % 2): 1
Floating division (7.0 / 2): 3.5
*/
