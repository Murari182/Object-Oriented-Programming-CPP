// Program Title: Comparing Call by Value, Call by Address, and Call by Reference
// Topic: Functions — Parameter Passing
// Purpose: Show how each parameter-passing mode affects the caller's variable.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_parameter_passing_value_address_reference.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

void by_value(int x) { x = 100; }
void by_pointer(int* p) { *p = 200; }
void by_reference(int& r) { r = 300; }

int main() {
    int n = 10;
    by_value(n);
    cout << "After by_value: " << n << endl;

    by_pointer(&n);
    cout << "After by_pointer: " << n << endl;

    by_reference(n);
    cout << "After by_reference: " << n << endl;

    return 0;
}

/*
Expected Deterministic Output:
After by_value: 10
After by_pointer: 200
After by_reference: 300
*/
