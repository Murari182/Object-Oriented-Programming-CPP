// Program Title: Rational Number (p/q) Addition in Reduced Form
// Topic: Programming Practice — Rational Arithmetic
// Purpose: Add two fractions and reduce them using greatest common divisor (GCD).
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_mathematical_computing_problem_solving.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class fraction {
private:
    int num;
    int den;

    static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

public:
    fraction(int n = 0, int d = 1) {
        int g = gcd(n, d);
        num = n / g;
        den = d / g;
    }

    fraction operator+(const fraction& f) const {
        return fraction((num * f.den) + (f.num * den), den * f.den);
    }

    void display() const {
        cout << num << "/" << den << endl;
    }
};

int main() {
    fraction f1(1, 4);
    fraction f2(1, 4);
    fraction sum = f1 + f2; // 2/4 -> reduced to 1/2
    sum.display();
    return 0;
}

/*
Expected Deterministic Output:
1/2
*/
