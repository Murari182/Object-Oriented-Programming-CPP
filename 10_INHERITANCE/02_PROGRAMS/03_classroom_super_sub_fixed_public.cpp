// Program Title: Corrected Classroom Example 1 (Fix A: Using Public Inheritance)
// Topic: Inheritance — Public Inheritance
// Purpose: Fix Classroom Example 1 by changing 'protected super' to 'public super' so obj.show() is accessible in main().
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

class sub : public super {
};

int main() {
    sub obj;
    obj.show();
    return 0;
}

/*
Expected Deterministic Output:
hello from super
*/
