// Program Title: Short-Circuit Logical Evaluation and Bitwise Operations
// Topic: Operators and Expressions — Short-Circuiting & Bitwise
// Purpose: Demonstrate that && skips its right operand when the left operand is false, plus bitwise AND/XOR.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_bitwise_operators_and_masks.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int counter = 10;

    // Because (x != 0) is false, (++counter > 0) is NEVER evaluated!
    if (x != 0 && ++counter > 0) {
        cout << "Inside if" << endl;
    }

    cout << "counter after short-circuit &&: " << counter << endl;
    cout << "Bitwise (6 & 3): " << (6 & 3) << ", (6 ^ 3): " << (6 ^ 3) << endl;
    return 0;
}

/*
Expected Deterministic Output:
counter after short-circuit &&: 10
Bitwise (6 & 3): 2, (6 ^ 3): 5
*/
