// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Ambiguous Lookup When Importing Two Namespaces With Identical Names
// Topic: Namespaces and Preprocessor — using Directive Collision
// Purpose: Show why bringing two namespaces with 'show()' into scope causes an ambiguity error on unqualified 'show()'.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/01_namespaces_and_scope_resolution.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

namespace first {
    void show() { cout << "first
"; }
}

namespace second {
    void show() { cout << "second
"; }
}

using namespace first;
using namespace second;

int main() {
    show(); // COMPILE ERROR: reference to 'show' is ambiguous
    return 0;
}

/*
Why Compilation Fails:
Unqualified lookup for 'show()' finds both 'first::show()' and 'second::show()'.
Fix: Qualify explicitly as 'first::show();' and 'second::show();'.
*/
