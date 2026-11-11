// Program Title: Generic Swap and Maximum Using Function Templates
// Topic: Templates — Function Templates
// Purpose: Demonstrate a single template function working for both int and double.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_function_templates_and_instantiation.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

template <typename T>
T get_max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max int: " << get_max(15, 25) << endl;
    cout << "Max double: " << get_max(4.5, 2.1) << endl;
    return 0;
}

/*
Expected Deterministic Output:
Max int: 25
Max double: 4.5
*/
