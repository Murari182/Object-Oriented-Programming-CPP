// Program Title: Mandatory Classroom Example — complex_system with Show_Num() and operator+()
// Topic: Operator Overloading — Binary Member Operator Overloading
// Purpose: Demonstrate real/imaginary constructor initialization, Show_Num(), operator+(), c1 + c2, and c1.operator+(c2).
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_mandatory_complex_system_and_overflow_analysis.md
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
        complex_system temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void Show_Num() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    complex_system c1(3, 4);
    complex_system c2(5, 6);

    // 1. Adding two complex_system objects using natural '+' operator syntax:
    complex_system c3 = c1 + c2;

    // 2. Adding two complex_system objects using explicit member function call syntax:
    complex_system c4 = c1.operator+(c2);

    cout << "First complex number (c1): ";
    c1.Show_Num();

    cout << "Second complex number (c2): ";
    c2.Show_Num();

    cout << "Sum using c1 + c2 (c3): ";
    c3.Show_Num();

    cout << "Sum using c1.operator+(c2) (c4): ";
    c4.Show_Num();

    return 0;
}

/*
Expected Deterministic Output:
First complex number (c1): 3 + 4i
Second complex number (c2): 5 + 6i
Sum using c1 + c2 (c3): 8 + 10i
Sum using c1.operator+(c2) (c4): 8 + 10i
*/
