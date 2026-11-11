// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Illegal Modifications with const Pointers
// Topic: Pointers and References — const Correctness Violations
// Purpose: Demonstrate why modifying *p through 'const int* p' and reassigning 'int* const q' fail at compile time.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/03_const_pointers_arrays_functions_objects.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    const int* p = &a;
    *p = 50; // COMPILE ERROR 1: assignment of read-only location '* p'

    int* const q = &a;
    q = &b;  // COMPILE ERROR 2: assignment of read-only variable 'q'

    return 0;
}

/*
Why Compilation Fails:
1. 'p' has type 'const int*'. Dereferencing '*p' yields a 'const int' lvalue, which is non-modifiable.
2. 'q' has type 'int* const'. The top-level 'const' qualifier applies to the pointer variable 'q' itself,
   forbidding reassignment after initialization.
See 04_const_pointer_variations.cpp for the corrected Category A version.
*/
