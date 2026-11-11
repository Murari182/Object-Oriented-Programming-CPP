// Program Title: Resolving Identical Identifiers Using Custom Namespaces
// Topic: Namespaces and Preprocessor
// Purpose: Show two namespaces defining 'value' and accessing both via scope resolution '::'.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_namespaces_and_scope_resolution.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

namespace physics {
    int value = 300;
}

namespace maths {
    int value = 400;
}

int main() {
    cout << "Physics value: " << physics::value << endl;
    cout << "Maths value: " << maths::value << endl;
    return 0;
}

/*
Expected Deterministic Output:
Physics value: 300
Maths value: 400
*/
