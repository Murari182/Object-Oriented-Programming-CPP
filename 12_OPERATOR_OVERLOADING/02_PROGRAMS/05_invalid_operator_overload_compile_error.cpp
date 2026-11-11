// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Arity Error — Binary Member Operator Taking Two Explicit Parameters
// Topic: Operator Overloading — Member Function Parameter Count Rule
// Purpose: Demonstrate why a non-static member operator+ cannot declare two explicit parameters.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/03_unary_and_binary_member_vs_friend.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

class complex_system {
private:
    int real;
    int imag;

public:
    complex_system(int r = 0, int i = 0) : real(r), imag(i) {}

    // COMPILE ERROR: A member binary operator+ already has 'this' as its left operand,
    // so it can take at most ONE explicit parameter!
    complex_system operator+(const complex_system& a, const complex_system& b) {
        return complex_system(a.real + b.real, a.imag + b.imag);
    }
};

int main() {
    complex_system c1(1, 2), c2(3, 4);
    complex_system c3 = c1 + c2;
    return 0;
}

/*
Why Compilation Fails:
Compiler diagnostic: "error: 'complex_system complex_system::operator+(const complex_system&, const complex_system&)'
must have either zero or one argument".
Fix: Either remove the first parameter (making it a 1-parameter member function, as in 01_classroom_complex_system.cpp)
or add the 'friend' keyword (making it a 2-parameter non-member function, as in 04_friend_binary_and_stream_overload.cpp).
*/
