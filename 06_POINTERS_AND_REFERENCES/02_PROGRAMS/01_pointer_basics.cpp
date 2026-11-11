// Program Title: Basic Pointer Declaration, Address-of, and Dereferencing
// Topic: Pointers and References
// Purpose: Demonstrate basic pointer initialization (&), reading (*p), and indirect modification (*p = value).
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_pointers_fundamentals_and_memory.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int age = 20;
    int* p = &age;

    cout << "Initial value of age: " << age << endl;
    cout << "Value accessed via *p: " << *p << endl;

    // Modify 'age' indirectly through the pointer 'p'
    *p = 25;

    cout << "Updated value of age after *p = 25: " << age << endl;
    cout << "Updated value via *p: " << *p << endl;

    return 0;
}

/*
Expected Deterministic Output:
Initial value of age: 20
Value accessed via *p: 20
Updated value of age after *p = 25: 25
Updated value via *p: 25
*/
