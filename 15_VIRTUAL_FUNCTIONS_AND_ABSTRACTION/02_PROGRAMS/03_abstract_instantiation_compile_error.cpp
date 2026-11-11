// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Attempting to Instantiate an Abstract Class Directly
// Topic: Virtual Functions and Abstraction — Abstract Class Rules
// Purpose: Show why creating an object of a class containing a pure virtual function fails at compile time.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/02_pure_virtual_functions_and_abstract_classes.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw() const = 0;
};

int main() {
    shape s; // COMPILE ERROR: cannot declare variable 's' to be of abstract type 'shape'
    return 0;
}

/*
Why Compilation Fails:
'shape' has a pure virtual function 'virtual void draw() const = 0;', making 'shape' an abstract class ([class.abstract]).
Abstract classes cannot be instantiated directly; instantiate a concrete derived class that overrides 'draw()'.
*/
