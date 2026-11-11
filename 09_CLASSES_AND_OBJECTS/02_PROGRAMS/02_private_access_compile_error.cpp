// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Direct Access to Private Data Member From main()
// Topic: Classes and Objects — Access Specifiers
// Purpose: Demonstrate why accessing private member 'p.age' directly inside main() fails to compile.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/01_classroom_person_and_encapsulation.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

class person {
private:
    int age;

public:
    void input(int a) {
        age = a;
    }
};

int main() {
    person p;
    p.age = 20; // COMPILE ERROR: 'int person::age' is private within this context
    return 0;
}

/*
Why Compilation Fails:
'age' is declared under the 'private:' access specifier in 'class person'.
Non-member functions like 'main()' cannot access private members directly; use 'p.input(20);' as shown in 01_classroom_person_basic.cpp.
*/
