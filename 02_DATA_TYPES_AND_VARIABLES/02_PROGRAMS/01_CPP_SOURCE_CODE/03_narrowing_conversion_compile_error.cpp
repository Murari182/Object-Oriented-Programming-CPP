// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Narrowing Conversion Rejected by Brace Initialization
// Topic: Data Types and Variables — List Initialization Rules
// Purpose: Show how brace initialization {3.14} catches floating-to-int narrowing at compile time.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/02_variable_initialization_and_narrowing.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

int main() {
    int x{3.14}; // COMPILE ERROR: narrowing conversion of '3.14' from 'double' to 'int'
    cout << x << endl;
    return 0;
}

/*
Why Compilation Fails:
ISO C++ [dcl.init.list] forbids narrowing conversions inside brace-init-lists '{}'.
Use a matching type 'double x{3.14};' or an explicit cast 'int x{static_cast<int>(3.14)};'.
*/
