// Program Title: Const Qualifications with Pointers (Valid Operations)
// Topic: Pointers and References — const Correctness
// Purpose: Demonstrate valid operations on const int*, int* const, and const int* const.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_const_pointers_arrays_functions_objects.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // 1. Pointer to const int: can change where it points, cannot change *ptr_to_const
    const int* ptr_to_const = &a;
    cout << "ptr_to_const initially points to: " << *ptr_to_const << endl;
    ptr_to_const = &b; // Valid: pointer itself is not const
    cout << "ptr_to_const now points to: " << *ptr_to_const << endl;

    // 2. Const pointer to int: cannot change where it points, can change *const_ptr
    int* const const_ptr = &a;
    *const_ptr = 99; // Valid: pointed-to int is mutable
    cout << "Value of a after *const_ptr = 99: " << a << endl;

    // 3. Const pointer to const int: neither address nor value can be modified via pointer
    const int* const fixed_read_only = &b;
    cout << "Value read via fixed_read_only: " << *fixed_read_only << endl;

    return 0;
}

/*
Expected Deterministic Output:
ptr_to_const initially points to: 10
ptr_to_const now points to: 20
Value of a after *const_ptr = 99: 99
Value read via fixed_read_only: 20
*/
