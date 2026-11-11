// Program Title: Multilevel Inheritance Constructor and Destructor Order
// Topic: Inheritance — Constructor and Destructor Invocation Sequence
// Purpose: Show that constructors run Base -> Derived and destructors run Derived -> Base.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_types_of_inheritance_and_constructor_order.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
public:
    person() {
        cout << "1. person constructor" << endl;
    }
    ~person() {
        cout << "6. person destructor" << endl;
    }
};

class student : public person {
public:
    student() {
        cout << "2. student constructor" << endl;
    }
    ~student() {
        cout << "5. student destructor" << endl;
    }
};

class result : public student {
public:
    result() {
        cout << "3. result constructor" << endl;
    }
    ~result() {
        cout << "4. result destructor" << endl;
    }
};

int main() {
    result r;
    return 0;
}

/*
Expected Deterministic Output:
1. person constructor
2. student constructor
3. result constructor
4. result destructor
5. student destructor
6. person destructor
*/
