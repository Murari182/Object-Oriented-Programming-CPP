// Program Title: Safe Negative Imaginary Formatting vs. INT_MIN Signed Overflow Edge Case
// Topic: Operator Overloading — Signed Integer Overflow and Formatting Edge Cases
// Purpose: Explain why negating INT_MIN (-imag) is Undefined Behavior and how to print negative imaginary numbers safely.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_mandatory_complex_system_and_overflow_analysis.md
// Program Classification: Category A — Valid and well-defined program (demonstrating safe handling of INT_MIN)

#include <iostream>
#include <climits>
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

    // Safe Show_Num(): widens 'imag' to 'long long' before negating so that even INT_MIN is printed without UB!
    void Show_Num() const {
        if (imag < 0) {
            long long safe_abs_imag = -(static_cast<long long>(imag));
            cout << real << " - " << safe_abs_imag << "i" << endl;
        } else {
            cout << real << " + " << imag << "i" << endl;
        }
    }
};

int main() {
    complex_system c_normal(5, -7);
    complex_system c_edge(1, INT_MIN); // On 32-bit int, INT_MIN is -2147483648

    c_normal.Show_Num();
    c_edge.Show_Num();

    return 0;
}

/*
Expected Deterministic Output (assuming 32-bit int where INT_MIN == -2147483648):
5 - 7i
1 - 2147483648i
*/
