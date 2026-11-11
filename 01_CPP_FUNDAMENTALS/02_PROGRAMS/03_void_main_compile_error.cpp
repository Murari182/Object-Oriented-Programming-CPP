// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Non-Standard 'void main()' Rejection in Standard C++
// Topic: C++ Fundamentals — main() Return Type Rule
// Purpose: Show why 'void main()' is rejected by a conforming C++ compiler.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/01_compilation_pipeline_and_program_structure.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

void main() { // COMPILE ERROR: '::main' must return 'int'
    cout << "Hello" << endl;
}

/*
Why Compilation Fails:
ISO C++ [basic.start.main] requires the global main function to have a return type of 'int'.
Replace 'void main()' with 'int main()' as shown in 01_first_classroom_program.cpp.
*/
