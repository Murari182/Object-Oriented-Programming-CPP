// Program Title: Uncaught Exception Resulting in Runtime Termination (std::terminate)
// Topic: Exception Handling — Type Mismatch in catch Block
// Purpose: Show how throwing an 'int' when only 'catch (double)' is present causes runtime termination.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_exceptions_try_throw_catch_fundamentals.md
// Program Classification: Category C — Runtime-error demonstration

#include <iostream>
using namespace std;

int main() {
    try {
        // Throws an 'int' (100).
        // Because C++ exception handling does NOT perform implicit int-to-double promotion,
        // 'catch (double)' below does NOT match!
        throw 100;
    }
    catch (double d) {
        cout << "Caught double: " << d << endl;
    }

    return 0;
}

/*
Runtime-Error Explanation (Category C):
1. This program compiles cleanly with zero syntax errors.
2. At runtime, 'throw 100;' throws an exception of type 'int'.
3. The handler 'catch (double d)' requires an exact match for 'double' (no arithmetic conversion from 'int' to 'double' is performed during catch matching).
4. Because the exception goes uncaught out of 'main()', the C++ runtime invokes 'std::terminate()', which aborts execution.
*/
