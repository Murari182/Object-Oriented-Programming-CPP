// Program Title: Dynamic Allocation of Classroom 'person' Objects
// Topic: Dynamic Memory Allocation — Objects on Free Store
// Purpose: Demonstrate creating and destroying a classroom 'person' object and array of objects using new and delete[].
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_dynamic_arrays_and_objects.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class person {
private:
    int age;

public:
    person() {
        age = 0;
        cout << "person constructed" << endl;
    }

    ~person() {
        cout << "person destroyed (age=" << age << ")" << endl;
    }

    void input(int a) {
        age = a;
    }

    void display() const {
        cout << "Age: " << age << endl;
    }
};

int main() {
    person* group = new person[2];

    group[0].input(20);
    group[1].input(22);

    group[0].display();
    group[1].display();

    delete[] group;
    group = nullptr;

    return 0;
}

/*
Expected Deterministic Output:
person constructed
person constructed
Age: 20
Age: 22
person destroyed (age=22)
person destroyed (age=20)
*/
