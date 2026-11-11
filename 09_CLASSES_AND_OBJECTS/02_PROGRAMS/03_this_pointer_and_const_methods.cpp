// Program Title: Using the 'this' Pointer and 'const' Member Functions
// Topic: Classes and Objects — this Pointer & const Correctness
// Purpose: Show resolving parameter shadowing via 'this->age = age' and calling a const display() on a const object.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_this_pointer_and_const_member_functions.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
private:
    int age;

public:
    person(int age = 0) {
        this->age = age;
    }

    void display() const {
        cout << "Const-safe Age: " << this->age << endl;
    }
};

int main() {
    const person p(21);
    p.display();
    return 0;
}

/*
Expected Deterministic Output:
Const-safe Age: 21
*/
