// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Non-Integral Condition in switch Statement
// Topic: Control Flow — switch Type Restrictions
// Purpose: Show why passing a double or float to switch(x) fails to compile.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/01_conditional_if_else_and_switch.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

int main() {
    double val = 1.5;
    switch (val) { // COMPILE ERROR: switch quantity not an integer
        case 1:
            cout << "One" << endl;
            break;
    }
    return 0;
}

/*
Why Compilation Fails:
ISO C++ [stmt.switch] requires the switch condition to be of integral or enumeration type.
Use an 'if-else' statement when branching on floating-point values.
*/
