// Program Title: Static Binding (Non-Virtual) vs. Dynamic Binding (Virtual)
// Topic: Polymorphism — Upcasting and Late Binding
// Purpose: Compare calling a non-virtual function vs. a virtual function through a base class pointer.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_upcasting_binding_and_virtual_dispatch.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class super {
public:
    void static_show() {
        cout << "super static_show (Early Binding)" << endl;
    }

    virtual void dynamic_show() {
        cout << "super dynamic_show" << endl;
    }

    virtual ~super() = default;
};

class sub : public super {
public:
    void static_show() {
        cout << "sub static_show" << endl;
    }

    void dynamic_show() override {
        cout << "sub dynamic_show (Late Binding)" << endl;
    }
};

int main() {
    sub obj;
    super* ptr = &obj;

    ptr->static_show();  // Calls super::static_show()
    ptr->dynamic_show(); // Calls sub::dynamic_show()

    return 0;
}

/*
Expected Deterministic Output:
super static_show (Early Binding)
sub dynamic_show (Late Binding)
*/
