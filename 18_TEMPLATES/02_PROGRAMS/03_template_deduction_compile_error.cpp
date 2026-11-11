// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Conflicting Template Argument Deduction (T vs T)
// Topic: Templates — Template Argument Deduction Rules
// Purpose: Show why get_max(10, 3.14) fails to deduce a single type T when parameters are (T, T).
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/01_function_templates_and_instantiation.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

template <typename T>
T get_max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // COMPILE ERROR: deduced conflicting types for parameter 'T' ('int' and 'double')
    cout << get_max(10, 3.14) << endl;
    return 0;
}

/*
Why Compilation Fails:
Template argument deduction does not perform implicit arithmetic promotions on template parameters 'T'.
Fix: Call 'get_max<double>(10, 3.14)' or use two template parameters 'template <typename T1, typename T2>'.
*/
