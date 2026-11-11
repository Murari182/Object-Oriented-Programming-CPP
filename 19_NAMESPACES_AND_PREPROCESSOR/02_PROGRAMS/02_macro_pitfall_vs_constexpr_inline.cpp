// Program Title: Textual Macro Expansion Pitfall vs. constexpr Function
// Topic: Namespaces and Preprocessor — Macros vs. constexpr
// Purpose: Contrast #define SQUARE(x) x*x on (3+2) against constexpr square(3+2).
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_preprocessor_directives_and_macro_pitfalls.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

#define UNSAFE_SQUARE(x) x * x

constexpr int safe_square(int x) {
    return x * x;
}

int main() {
    cout << "UNSAFE_SQUARE(3 + 2) expands to 3 + 2 * 3 + 2 = " << UNSAFE_SQUARE(3 + 2) << endl;
    cout << "safe_square(3 + 2) evaluates (5 * 5) = " << safe_square(3 + 2) << endl;
    return 0;
}

/*
Expected Deterministic Output:
UNSAFE_SQUARE(3 + 2) expands to 3 + 2 * 3 + 2 = 11
safe_square(3 + 2) evaluates (5 * 5) = 25
*/
