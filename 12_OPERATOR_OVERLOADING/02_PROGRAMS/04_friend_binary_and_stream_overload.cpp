// Program Title: Overloading Binary + and Stream << Using Friend Functions
// Topic: Operator Overloading — Friend Operator Overloading
// Purpose: Show how friend functions enable symmetric addition (10 + c1) and stream output (cout << c1).
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_unary_and_binary_member_vs_friend.md
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

    friend complex_system operator+(const complex_system& a, const complex_system& b) {
        return complex_system(a.real + b.real, a.imag + b.imag);
    }

    friend ostream& operator<<(ostream& out, const complex_system& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    complex_system c1(2, 3);
    complex_system c2(4, 5);

    complex_system c3 = c1 + c2;
    complex_system c4 = 10 + c1; // Works because 10 converts to complex_system(10, 0) in friend operator+!

    cout << "c3 = " << c3 << endl;
    cout << "c4 = " << c4 << endl;

    return 0;
}

/*
Expected Deterministic Output:
c3 = 6 + 8i
c4 = 12 + 3i
*/
