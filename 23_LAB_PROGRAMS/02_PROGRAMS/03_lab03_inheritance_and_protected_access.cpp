// Program Title: Lab Experiment 3 — Protected Inheritance Access Control (person and student)
// Topic: Lab Programs — Inheritance
// Purpose: University Lab Practical 3 demonstrating calling a protected inherited member from inside derived display().
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_lab_manual_index_and_guidelines.md
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
        cout << "Age via protected inheritance: " << input(30) << endl;
    }
};

int main() {
    student s;
    s.display();
    return 0;
}

/*
Expected Deterministic Output:
Age via protected inheritance: 30
*/
