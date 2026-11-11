// Program Title: Corrected Classroom Example 1 (Fix B: Calling Protected Member from Inside sub)
// Topic: Inheritance — Protected Inheritance with Public Wrapper Member Function
// Purpose: Keep 'class sub : protected super' and demonstrate that sub's own member function can call show().
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_mandatory_classroom_examples_analysis.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class super {
public:
    void show() {
        cout << "hello from super" << endl;
    }
};

class sub : protected super {
public:
    void display() {
        show(); // Legal! Inside sub, the protected inherited member show() is accessible.
    }
};

int main() {
    sub obj;
    obj.display();
    return 0;
}

/*
Expected Deterministic Output:
hello from super
*/
