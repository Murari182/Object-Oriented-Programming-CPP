// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Copy Constructor Declared with Pass-by-Value Parameter
// Topic: Constructors and Destructors — Copy Constructor Signature Rule
// Purpose: Show why 'person(person other)' is rejected by the C++ compiler.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/02_copy_constructor_shallow_vs_deep_copy.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

class person {
private:
    int age;

public:
    person(int a = 0) : age(a) {}

    // COMPILE ERROR: invalid constructor; you probably meant 'person (const person&)'
    person(person other) {
        age = other.age;
    }
};

int main() {
    person p1(20);
    return 0;
}

/*
Why Compilation Fails:
According to ISO C++ [class.copy.ctor], a constructor for class X is ill-formed if its first parameter
is of type X (by value) and there are no other parameters without default arguments, because passing X
by value would recursively invoke the copy constructor infinitely.
*/
