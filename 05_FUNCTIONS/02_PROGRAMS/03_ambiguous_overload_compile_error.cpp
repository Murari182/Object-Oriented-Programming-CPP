// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Ambiguous Function Overload With Default Arguments
// Topic: Functions — Overload Resolution Ambiguity
// Purpose: Show why overloading 'func(int)' and 'func(int, int = 0)' causes a compile-time ambiguity on 'func(10)'.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/02_default_arguments_inline_and_overloading.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

void show(int a) {
    cout << a << endl;
}

void show(int a, int b = 0) {
    cout << a << " " << b << endl;
}

int main() {
    show(10); // COMPILE ERROR: call of overloaded 'show(int)' is ambiguous
    return 0;
}

/*
Why Compilation Fails:
Both 'show(int)' and 'show(int, int = 0)' can be called with a single int argument '10',
and neither is a better match than the other under ISO C++ [over.match].
*/
