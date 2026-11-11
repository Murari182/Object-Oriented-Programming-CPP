// Program Title: All-in-One Classroom Revision Program
// Topic: Revision Notes — Classes, Inheritance, Operator Overloading, and Exceptions
// Purpose: Review the core classroom patterns in a single self-contained C++23 program.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_inheritance_and_oop_rules_cheat_sheet.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
protected:
    int age;

public:
    person(int a = 0) : age(a) {}
};

class student : public person {
private:
    int marks;

public:
    student(int a = 0, int m = 0) : person(a), marks(m) {}

    student operator+(const student& other) const {
        return student(age, marks + other.marks);
    }

    void display() const {
        cout << "Age: " << age << ", Marks: " << marks << endl;
    }
};

int main() {
    student s1(20, 45);
    student s2(20, 50);
    student combined = s1 + s2;
    combined.display();
    return 0;
}

/*
Expected Deterministic Output:
Age: 20, Marks: 95
*/
