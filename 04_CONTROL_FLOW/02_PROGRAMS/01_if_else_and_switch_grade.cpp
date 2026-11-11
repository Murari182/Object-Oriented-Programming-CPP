// Program Title: Grade Classification Using if-else and switch-case
// Topic: Control Flow — Selection Statements
// Purpose: Demonstrate if-else ladder and switch-case with break statements.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_conditional_if_else_and_switch.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int marks = 85;
    char grade;

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else {
        grade = 'C';
    }

    switch (grade) {
        case 'A':
            cout << "Grade A: Excellent" << endl;
            break;
        case 'B':
            cout << "Grade B: Very Good" << endl;
            break;
        default:
            cout << "Grade C: Good" << endl;
            break;
    }

    return 0;
}

/*
Expected Deterministic Output:
Grade B: Very Good
*/
