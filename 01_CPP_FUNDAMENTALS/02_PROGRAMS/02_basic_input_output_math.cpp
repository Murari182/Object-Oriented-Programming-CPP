// Program Title: Basic Arithmetic and Stream Chaining
// Topic: C++ Fundamentals — I/O Streams
// Purpose: Demonstrate variable output and chained << insertion operators.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_iostream_and_namespace_std.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int b = 25;
    int sum = a + b;

    cout << "a = " << a << ", b = " << b << ", sum = " << sum << endl;
    return 0;
}

/*
Expected Deterministic Output:
a = 15, b = 25, sum = 40
*/
