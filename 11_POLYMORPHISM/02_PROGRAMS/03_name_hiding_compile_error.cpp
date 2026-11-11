// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Derived Class Member Function Hiding Base Class Overloads
// Topic: Polymorphism — Name Lookup and Hiding in Inheritance
// Purpose: Show why defining show() in sub hides show(int) in super during unqualified lookup.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/03_object_slicing_and_name_hiding.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

class super {
public:
    void show(int x) {
        cout << "super show(int): " << x << endl;
    }
};

class sub : public super {
public:
    void show() {
        cout << "sub show()" << endl;
    }
};

int main() {
    sub obj;
    obj.show(10); // COMPILE ERROR: no matching function for call to 'sub::show(int)'
    return 0;
}

/*
Why Compilation Fails:
Name lookup for 'obj.show' stops as soon as it finds 'sub::show()' inside 'class sub'.
Overload resolution does NOT automatically search base classes once a matching name is found in the derived scope!
Fix: Add 'using super::show;' inside the 'public:' section of 'class sub', or call 'obj.super::show(10);'.
*/
