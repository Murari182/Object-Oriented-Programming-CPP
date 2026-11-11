// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Mandatory Classroom Example 1 — Protected Inheritance Access Violation (super and sub)
// Topic: Inheritance — Protected Inheritance Access Control
// Purpose: Preserve and explain the classroom program where obj.show() fails in main() due to protected inheritance.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/02_mandatory_classroom_examples_analysis.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

class super {
public:
    void show() {
        cout << "hello from super" << endl;
    }
};

class sub : protected super {
};

int main() {
    sub obj;
    obj.show(); // Intentional compilation error
    return 0;
}

/*
Why Compilation Fails:
1. 'show()' is declared 'public' inside 'class super'.
2. 'class sub : protected super' inherits from 'super' using 'protected' visibility.
3. Under C++ standard rule [class.access.base], all 'public' members of 'super' become 'protected' members of 'sub'.
4. 'main()' is an external function outside 'sub'. External functions cannot call 'protected' members through an object ('obj.show()').
See 03_classroom_super_sub_fixed_public.cpp and 04_classroom_super_sub_fixed_wrapper.cpp for the corrected Category A versions.
*/
