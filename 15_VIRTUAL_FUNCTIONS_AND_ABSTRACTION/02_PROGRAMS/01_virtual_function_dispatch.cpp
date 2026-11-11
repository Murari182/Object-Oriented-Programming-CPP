// Program Title: Runtime Polymorphism Using Virtual Functions
// Topic: Virtual Functions and Abstraction
// Purpose: Demonstrate dynamic dispatch via base pointer pointing to different derived objects.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_virtual_functions_vtable_and_vptr.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
public:
    virtual void introduce() const {
        cout << "I am a person." << endl;
    }
    virtual ~person() = default;
};

class student : public person {
public:
    void introduce() const override {
        cout << "I am a student." << endl;
    }
};

class teacher : public person {
public:
    void introduce() const override {
        cout << "I am a teacher." << endl;
    }
};

int main() {
    student s;
    teacher t;

    person* p = &s;
    p->introduce();

    p = &t;
    p->introduce();

    return 0;
}

/*
Expected Deterministic Output:
I am a student.
I am a teacher.
*/
