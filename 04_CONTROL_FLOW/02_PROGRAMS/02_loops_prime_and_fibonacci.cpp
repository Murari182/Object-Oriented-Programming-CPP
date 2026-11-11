// Program Title: Prime Check and Fibonacci Sequence Using Loops
// Topic: Control Flow — Iteration Statements
// Purpose: Demonstrate for and while loops on standard B.Tech exam problems.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_loops_for_while_do_while_and_range_for.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int n = 17;
    bool is_prime = true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    cout << n << " is prime: " << is_prime << endl;

    cout << "First 6 Fibonacci numbers: ";
    int a = 0, b = 1;
    for (int k = 0; k < 6; k++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;

    return 0;
}

/*
Expected Deterministic Output:
17 is prime: 1
First 6 Fibonacci numbers: 0 1 1 2 3 5 
*/
