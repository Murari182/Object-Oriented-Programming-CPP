// Program Title: Solving the Diamond Problem Using Virtual Base Classes
// Topic: Inheritance — Multipath Inheritance and virtual public Base Classes
// Purpose: Demonstrate unambiguous access to a single shared 'person' subobject via virtual inheritance.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/04_ambiguity_diamond_problem_and_virtual_base.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
public:
    int age;

    void show_age() {
        cout << "Shared person age: " << age << endl;
    }
};

class student : virtual public person {
public:
    int roll;
};

class employee : virtual public person {
public:
    int salary;
};

class teaching_assistant : public student, public employee {
public:
    void display() {
        show_age();
        cout << "Roll: " << roll << ", Salary: " << salary << endl;
    }
};

int main() {
    teaching_assistant ta;

    ta.age = 23; // Unambiguous because student and employee inherit 'person' virtually!
    ta.roll = 105;
    ta.salary = 15000;
    ta.display();

    return 0;
}

/*
Expected Deterministic Output:
Shared person age: 23
Roll: 105, Salary: 15000
*/
