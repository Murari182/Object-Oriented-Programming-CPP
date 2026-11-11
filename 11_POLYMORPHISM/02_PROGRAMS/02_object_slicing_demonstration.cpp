// Program Title: Object Slicing When Passing Derived Object by Value vs. by Reference
// Topic: Polymorphism — Object Slicing
// Purpose: Show how passing by value slices off derived overrides, while passing by const reference preserves polymorphism.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_object_slicing_and_name_hiding.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
public:
    virtual void role() const {
        cout << "Role: General Person" << endl;
    }
    virtual ~person() = default;
};

class student : public person {
public:
    void role() const override {
        cout << "Role: Student" << endl;
    }
};

void print_by_value(person p) {
    p.role(); // Sliced! Always prints General Person
}

void print_by_reference(const person& p) {
    p.role(); // Polymorphic! Prints Student
}

int main() {
    student s;
    print_by_value(s);
    print_by_reference(s);
    return 0;
}

/*
Expected Deterministic Output:
Role: General Person
Role: Student
*/
