// Program Title: Simple Single Public Inheritance (person and student)
// Topic: Inheritance — Single Public Inheritance
// Purpose: Demonstrate how a derived class (student) inherits public members from a base class (person).
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_inheritance_fundamentals_and_access_modes.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
protected:
    int age;

public:
    void set_age(int a) {
        age = a;
    }
};

class student : public person {
private:
    int roll;

public:
    void set_roll(int r) {
        roll = r;
    }

    void display() {
        cout << "Roll: " << roll << ", Age: " << age << endl;
    }
};

int main() {
    student s;

    s.set_age(20);
    s.set_roll(101);
    s.display();

    return 0;
}

/*
Expected Deterministic Output:
Roll: 101, Age: 20
*/
