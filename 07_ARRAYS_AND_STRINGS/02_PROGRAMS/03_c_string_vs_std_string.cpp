// Program Title: C-Style Null-Terminated String vs. Modern std::string
// Topic: Arrays and Strings — String Handling
// Purpose: Compare C-style char array traversal with modern std::string operations.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_c_strings_vs_std_string.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
#include <string>
using namespace std;

int main() {
    char c_str[6] = "Hello";
    string modern_str = "Hello";

    cout << "C-string: " << c_str << endl;
    modern_str = modern_str + " C++23";
    cout << "std::string: " << modern_str << " (Length: " << modern_str.length() << ")" << endl;

    return 0;
}

/*
Expected Deterministic Output:
C-string: Hello
std::string: Hello C++23 (Length: 11)
*/
