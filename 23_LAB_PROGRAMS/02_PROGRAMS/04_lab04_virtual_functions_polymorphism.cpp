// Program Title: Lab Experiment 4 — Runtime Polymorphism With Base Class Pointer
// Topic: Lab Programs — Virtual Functions
// Purpose: University Lab Practical 4 demonstrating late binding via virtual functions.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_lab_manual_index_and_guidelines.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class super {
public:
    virtual void show() const {
        cout << "hello from super" << endl;
    }
    virtual ~super() = default;
};

class sub : public super {
public:
    void show() const override {
        cout << "hello from sub" << endl;
    }
};

int main() {
    sub obj;
    super* ptr = &obj;
    ptr->show();
    return 0;
}

/*
Expected Deterministic Output:
hello from sub
*/
