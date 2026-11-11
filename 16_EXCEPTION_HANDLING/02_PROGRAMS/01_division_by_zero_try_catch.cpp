// Program Title: Division by Zero Exception Handling Using try, throw, and catch
// Topic: Exception Handling — Basic try-throw-catch Flow
// Purpose: Demonstrate checking a division precondition and throwing an exception caught in main().
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_exceptions_try_throw_catch_fundamentals.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int divide(int num, int den) {
    if (den == 0) {
        throw "Error: Division by zero is not allowed!";
    }
    return num / den;
}

int main() {
    try {
        cout << "Result 1: " << divide(20, 4) << endl;
        cout << "Result 2: " << divide(15, 0) << endl;
        cout << "This line is skipped after throw." << endl;
    }
    catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }

    cout << "Program continues normally after catch." << endl;
    return 0;
}

/*
Expected Deterministic Output:
Result 1: 5
Caught exception: Error: Division by zero is not allowed!
Program continues normally after catch.
*/
