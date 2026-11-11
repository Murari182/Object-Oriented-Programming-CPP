// Program Title: Corrected Classroom Example 2 — Accessing Protected Inherited input() via student::display()
// Topic: Inheritance — Protected Inheritance Access from Inside Derived Class
// Purpose: Demonstrate the working version of Classroom Example 2 where s.display() calls inherited input(30).
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_mandatory_classroom_examples_analysis.md
// Program Classification: Category A — Valid and well-defined program

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

    // s.input(40) is omitted here because input() is protected in student.
    // Instead, we call the public member function s.display():
    s.display();

    return 0;
}

/*
Expected Deterministic Output:
30
*/
