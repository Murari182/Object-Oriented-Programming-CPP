// Program Title: Virtual Destructor Ensuring Complete Derived Cleanup via Base Pointer
// Topic: Virtual Functions and Abstraction — Virtual Destructors
// Purpose: Show how 'virtual ~super()' guarantees that '~sub()' executes when deleting a 'sub' object via 'super*'.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_virtual_destructors_override_and_final.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class super {
public:
    super() {
        cout << "1. super constructed" << endl;
    }
    virtual ~super() {
        cout << "4. super destroyed" << endl;
    }
};

class sub : public super {
public:
    sub() {
        cout << "2. sub constructed" << endl;
    }
    ~sub() override {
        cout << "3. sub destroyed" << endl;
    }
};

int main() {
    super* ptr = new sub();
    delete ptr; // Safely calls ~sub() first, then ~super()!
    return 0;
}

/*
Expected Deterministic Output:
1. super constructed
2. sub constructed
3. sub destroyed
4. super destroyed
*/
