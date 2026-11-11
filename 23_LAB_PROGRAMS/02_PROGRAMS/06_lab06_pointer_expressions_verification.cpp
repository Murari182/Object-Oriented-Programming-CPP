// Program Title: Lab Experiment 6 — Pointer Arithmetic and Dereference Expressions
// Topic: Lab Programs — Pointers
// Purpose: University Lab Practical 6 demonstrating *p++, (*p)++, ++*p, and *++p.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_lab_manual_index_and_guidelines.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    int arr[4] = {10, 20, 30, 40};
    int* p = arr;

    cout << "*p++  = " << *p++ << endl;
    cout << "(*p)++= " << (*p)++ << endl;
    cout << "++*p  = " << ++*p << endl;
    cout << "*++p  = " << *++p << endl;

    return 0;
}

/*
Expected Deterministic Output:
*p++  = 10
(*p)++= 20
++*p  = 22
*++p  = 30
*/
