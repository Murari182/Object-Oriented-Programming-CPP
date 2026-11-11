// Program Title: Classic Viva-Voce Output Demonstrations (Empty Class Size, vptr Size, and Binding)
// Topic: Theory and Viva Questions
// Purpose: Demonstrate sizeof(empty_class) and sizeof(polymorphic_class) for viva verification.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_top_50_rapid_viva_questions_and_answers.md
// Program Classification: Category G — Implementation-defined sizeof values (guaranteed >= 1 for empty_class)

#include <iostream>
using namespace std;

class empty_class {};

class with_virtual {
public:
    virtual void show() {}
};

int main() {
    cout << "Is sizeof(empty_class) >= 1? " << (sizeof(empty_class) >= 1) << endl;
    cout << "Is sizeof(with_virtual) >= sizeof(void*)? " << (sizeof(with_virtual) >= sizeof(void*)) << endl;
    return 0;
}

/*
Expected Output:
Is sizeof(empty_class) >= 1? 1
Is sizeof(with_virtual) >= sizeof(void*)? 1
*/
