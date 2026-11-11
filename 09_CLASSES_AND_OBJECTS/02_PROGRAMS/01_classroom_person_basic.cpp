// Program Title: Baseline Classroom 'person' Class Demonstration
// Topic: Classes and Objects — Encapsulation and Member Functions
// Purpose: Preserve the foundational classroom person class with private age, input(int), and display().
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_classroom_person_and_encapsulation.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
private:
    int age;

public:
    void input(int a) {
        age = a;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    person p;

    p.input(20);
    p.display();

    return 0;
}

/*
Expected Deterministic Output:
Age: 20
*/
