// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Implicit Copy-Initialization Blocked by explicit Constructor
// Topic: Type Conversion and Casting — explicit Specifier
// Purpose: Show why 'person p = 20;' fails when 'explicit person(int a)' is used.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/01_implicit_and_user_defined_conversions.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

class person {
private:
    int age;

public:
    explicit person(int a) : age(a) {}
};

int main() {
    person p = 20; // COMPILE ERROR: conversion from 'int' to non-scalar type 'person' requested
    return 0;
}

/*
Why Compilation Fails:
Marking the constructor 'explicit' prevents implicit conversions in copy-initialization ('person p = 20;').
Use direct initialization 'person p(20);' or 'person p{20};'.
*/
