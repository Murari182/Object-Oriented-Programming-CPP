// Program Title: Unsequenced Pointer Modification Undefined Behavior (*p++ + *p++)
// Topic: Pointers and References — Sequencing vs. Operator Precedence
// Purpose: Explain why *p++ + *p++ causes Undefined Behavior under ISO C++ [intro.execution] and how to sequence it properly.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_pointer_arithmetic_and_13_expressions.md
// Program Classification: Category D — Undefined-behavior demonstration

#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* p = &arr[0];

    // UNDEFINED BEHAVIOR STATEMENT:
    // Both operands of binary '+' modify the scalar pointer 'p' via post-increment.
    // In C++ (including C++17, C++20, and C++23), the operands of '+' are unsequenced
    // relative to each other. Therefore, '*p++ + *p++' has Undefined Behavior!
    int ub_sum = *p++ + *p++;
    cout << "Result of unsequenced expression (NOT guaranteed by C++ standard): " << ub_sum << endl;

    // WELL-DEFINED SEQUENCED ALTERNATIVE:
    // Separate the two pointer increments across full statements (separated by ';')
    int* q = &arr[0];
    int first_val = *q++;
    int second_val = *q++;
    int defined_sum = first_val + second_val; // Guaranteed: 10 + 20 = 30
    cout << "Well-defined sequenced sum: " << defined_sum << endl;

    return 0;
}

/*
Note on Output (Category D):
No guaranteed runtime output exists for 'ub_sum' because unsequenced scalar modification
is Undefined Behavior under ISO C++ [intro.execution]. The well-defined sequenced
alternative always computes defined_sum = 30.
*/
