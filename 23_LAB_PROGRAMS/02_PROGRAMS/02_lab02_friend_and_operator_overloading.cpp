// Program Title: Lab Experiment 2 — Complex Number Addition Using complex_system
// Topic: Lab Programs — Operator Overloading
// Purpose: University Lab Practical 2 demonstrating operator+ and Show_Num().
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_lab_manual_index_and_guidelines.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class complex_system {
private:
    int real;
    int imag;

public:
    complex_system(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    complex_system operator+(const complex_system& obj) const {
        return complex_system(real + obj.real, imag + obj.imag);
    }

    void Show_Num() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    complex_system c1(4, 7), c2(6, 3);
    complex_system c3 = c1 + c2;
    c3.Show_Num();
    return 0;
}

/*
Expected Deterministic Output:
10 + 10i
*/
