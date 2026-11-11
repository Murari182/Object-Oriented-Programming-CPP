// Program Title: Unsequenced Scalar Modification Undefined Behavior (i++ + ++i)
// Topic: Operators and Expressions — Sequencing Rules
// Purpose: Explain why expressions like 'i++ + ++i' have Undefined Behavior in C++23.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/03_precedence_associativity_and_sequencing.md
// Program Classification: Category D — Undefined-behavior demonstration

#include <iostream>
using namespace std;

int main() {
    /*
    UNDEFINED BEHAVIOR EXPLANATION (Category D):
    In classroom exams, questions sometimes ask for the output of:
        int i = 5;
        int y = i++ + ++i; // <-- UNDEFINED BEHAVIOR!
    Under ISO C++ [intro.execution], binary '+' does not sequence its left and right
    operands. Modifying 'i' twice without sequencing is Undefined Behavior and has NO
    standard-guaranteed output. Always write sequenced statements instead:
    */
    int i = 5;
    int first = i++;
    int second = ++i;
    int y = first + second; // Well-defined: 5 + 7 = 12
    cout << "Well-defined sequenced result: " << y << endl;
    return 0;
}
