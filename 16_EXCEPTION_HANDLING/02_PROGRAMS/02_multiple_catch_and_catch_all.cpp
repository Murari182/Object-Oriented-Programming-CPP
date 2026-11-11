// Program Title: Multiple catch Blocks and Catch-All Handler (catch (...))
// Topic: Exception Handling — Multi-Type Exception Dispatch
// Purpose: Show how different exception types match specific catch handlers and how catch(...) handles unknown types.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_exceptions_try_throw_catch_fundamentals.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

void test_exception(int mode) {
    try {
        if (mode == 1) {
            throw 404;
        } else if (mode == 2) {
            throw "Invalid access token";
        } else if (mode == 3) {
            throw 3.14;
        }
    }
    catch (int code) {
        cout << "Caught int code: " << code << endl;
    }
    catch (const char* text) {
        cout << "Caught C-string: " << text << endl;
    }
    catch (...) {
        cout << "Caught unknown exception via catch(...)" << endl;
    }
}

int main() {
    test_exception(1);
    test_exception(2);
    test_exception(3);
    return 0;
}

/*
Expected Deterministic Output:
Caught int code: 404
Caught C-string: Invalid access token
Caught unknown exception via catch(...)
*/
