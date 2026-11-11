// Program Title: Default, Parameterized, and Copy Constructors in Classroom 'person' Class
// Topic: Constructors and Destructors
// Purpose: Demonstrate all three constructor types and destructor invocation order.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_constructors_types_and_initializer_lists.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
private:
    int age;

public:
    person() {
        age = 18;
        cout << "Default constructor (age=" << age << ")" << endl;
    }

    person(int a) {
        age = a;
        cout << "Parameterized constructor (age=" << age << ")" << endl;
    }

    person(const person& other) {
        age = other.age;
        cout << "Copy constructor (copied age=" << age << ")" << endl;
    }

    ~person() {
        cout << "Destructor for age=" << age << endl;
    }
};

int main() {
    person p1;
    person p2(25);
    person p3 = p2;
    return 0;
}

/*
Expected Deterministic Output:
Default constructor (age=18)
Parameterized constructor (age=25)
Copy constructor (copied age=25)
Destructor for age=25
Destructor for age=25
Destructor for age=18
*/
