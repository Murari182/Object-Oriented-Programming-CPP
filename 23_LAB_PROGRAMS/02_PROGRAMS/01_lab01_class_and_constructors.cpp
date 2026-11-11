// Program Title: Lab Experiment 1 — Student Class With Default, Parameterized, and Copy Constructors
// Topic: Lab Programs — Classes and Constructors
// Purpose: University Lab Practical 1 demonstrating object creation and constructor overloading.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_lab_manual_index_and_guidelines.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class student {
private:
    int roll;
    int marks;

public:
    student() {
        roll = 0;
        marks = 0;
    }

    student(int r, int m) {
        roll = r;
        marks = m;
    }

    student(const student& s) {
        roll = s.roll;
        marks = s.marks;
    }

    void display() const {
        cout << "Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    student s1;
    student s2(101, 92);
    student s3 = s2;

    s1.display();
    s2.display();
    s3.display();
    return 0;
}

/*
Expected Deterministic Output:
Roll: 0, Marks: 0
Roll: 101, Marks: 92
Roll: 101, Marks: 92
*/
