// Program Title: Safe Numeric static_cast and Runtime Polymorphic dynamic_cast
// Topic: Type Conversion and Casting — Named Casts
// Purpose: Demonstrate static_cast<double> and checking dynamic_cast<student*> against nullptr.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_the_four_cpp_named_casts.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
public:
    virtual ~person() = default;
};

class student : public person {
public:
    void study() const { cout << "Student is studying." << endl; }
};

int main() {
    int a = 7, b = 2;
    cout << "static_cast division: " << static_cast<double>(a) / b << endl;

    student s;
    person* base_ptr = &s;

    student* derived_ptr = dynamic_cast<student*>(base_ptr);
    if (derived_ptr != nullptr) {
        derived_ptr->study();
    }

    return 0;
}

/*
Expected Deterministic Output:
static_cast division: 3.5
Student is studying.
*/
