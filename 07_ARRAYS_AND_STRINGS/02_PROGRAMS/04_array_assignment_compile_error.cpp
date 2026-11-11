// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Direct Assignment and Increment of Array Names
// Topic: Arrays and Strings — Array Non-Modifiable Lvalue Rules
// Purpose: Show why assigning one raw array to another (a = b) or incrementing an array name (a++) fails to compile.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/02_array_decay_and_pointer_equivalence.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

int main() {
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};

    a = b; // COMPILE ERROR 1: invalid array assignment
    a++;   // COMPILE ERROR 2: lvalue required as increment operand

    return 0;
}

/*
Why Compilation Fails:
Raw C++ arrays cannot be assigned directly as whole objects, nor can the array identifier 'a' be reseated.
To copy elements, either copy element-by-element in a loop, or use std::array<int, 3> (#include <array>).
*/
