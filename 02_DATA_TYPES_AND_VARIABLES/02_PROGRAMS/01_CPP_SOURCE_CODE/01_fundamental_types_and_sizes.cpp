// Program Title: Fundamental Data Types, Initialization, and Value Ranges
// Topic: Data Types and Variables
// Purpose: Demonstrate initializing fundamental C++ types and printing their values.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_fundamental_types_and_representations.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int count{42};
    double ratio{3.5};
    char grade{'A'};
    bool passed{true};

    cout << "count: " << count << ", ratio: " << ratio
         << ", grade: " << grade << ", passed: " << passed << endl;
    return 0;
}

/*
Expected Deterministic Output:
count: 42, ratio: 3.5, grade: A, passed: 1
*/
