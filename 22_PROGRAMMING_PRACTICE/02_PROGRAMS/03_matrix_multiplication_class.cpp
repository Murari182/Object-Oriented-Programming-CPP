// Program Title: 2x2 Matrix Multiplication Class
// Topic: Programming Practice — Linear Algebra in C++
// Purpose: Multiply two 2x2 matrices using a classroom matrix class.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_mathematical_computing_problem_solving.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class matrix2x2 {
public:
    int m[2][2];

    matrix2x2(int a = 0, int b = 0, int c = 0, int d = 0) {
        m[0][0] = a; m[0][1] = b;
        m[1][0] = c; m[1][1] = d;
    }

    matrix2x2 operator*(const matrix2x2& other) const {
        matrix2x2 res;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                res.m[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    res.m[i][j] += m[i][k] * other.m[k][j];
                }
            }
        }
        return res;
    }

    void display() const {
        cout << m[0][0] << " " << m[0][1] << endl;
        cout << m[1][0] << " " << m[1][1] << endl;
    }
};

int main() {
    matrix2x2 A(1, 2, 3, 4);
    matrix2x2 B(2, 0, 1, 2);
    matrix2x2 C = A * B;
    C.display();
    return 0;
}

/*
Expected Deterministic Output:
4 4
10 8
*/
