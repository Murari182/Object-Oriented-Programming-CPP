// Program Title: Quadratic Polynomial Addition Using Operator Overloading
// Topic: Programming Practice — Mathematical Computing with Classes
// Purpose: Add two quadratic polynomials (ax^2 + bx + c) using operator+.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_mathematical_computing_problem_solving.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class polynomial {
private:
    int a, b, c; // Represents a*x^2 + b*x + c

public:
    polynomial(int c2 = 0, int c1 = 0, int c0 = 0) {
        a = c2;
        b = c1;
        c = c0;
    }

    polynomial operator+(const polynomial& p) const {
        return polynomial(a + p.a, b + p.b, c + p.c);
    }

    void display() const {
        cout << a << "x^2 + " << b << "x + " << c << endl;
    }
};

int main() {
    polynomial p1(3, 4, 5);
    polynomial p2(2, 6, 1);
    polynomial p3 = p1 + p2;

    p3.display();
    return 0;
}

/*
Expected Deterministic Output:
5x^2 + 10x + 6
*/
