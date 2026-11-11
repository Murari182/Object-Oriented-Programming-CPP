// INTENTIONAL COMPILE-TIME ERROR DEMONSTRATION
// Program Title: Mandatory Classroom Example 2 — Inside-Derived vs. Outside-Derived Access (person and student)
// Topic: Inheritance — Protected Inheritance Access Transformation
// Purpose: Demonstrate why s.input(40) fails in main() while display() calling input(30) inside student is legal.
// Target C++ Standard: C++23
// Related Theory File: ../01_THEORY/02_mandatory_classroom_examples_analysis.md
// Program Classification: Category B — Intentional compilation-error demonstration

#include <iostream>
using namespace std;

class person {
public:
    int age;

    int input(int a) {
        age = a;
        return age;
    }
};

class student : protected person {
public:
    void display() {
        cout << input(30) << endl;
    }
};

int main() {
    student s;

    s.input(40); // Intentional compilation error

    s.display();
    return 0;
}

/*
Why Compilation Fails on 's.input(40)' While 'display()' Succeeds:
1. 'person::input(int)' is 'public' in 'person', but becomes 'protected' in 'student' due to ': protected person'.
2. Inside 'student::display()', calling 'input(30)' is LEGAL because a derived class member function can access its own 'protected' inherited members.
3. Inside 'main()', calling 's.input(40)' is ILLEGAL (Compile Error) because 'main()' is outside 'student' and cannot access 'protected' members of 'student'.
See 06_classroom_person_student_corrected.cpp for the corrected Category A version.
*/
