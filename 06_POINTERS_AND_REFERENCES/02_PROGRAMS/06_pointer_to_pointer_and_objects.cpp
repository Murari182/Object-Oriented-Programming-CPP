// Program Title: Pointer to Pointer and Pointers to Classroom Objects
// Topic: Pointers and References — Double Indirection & Object Pointers
// Purpose: Demonstrate int** double dereferencing and accessing a classroom 'person' object via '->'.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_const_pointers_arrays_functions_objects.md
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
    // Part 1: Pointer to Pointer (int**)
    int marks = 85;
    int* p = &marks;
    int** pp = &p;

    cout << "Marks via **pp: " << **pp << endl;
    **pp = 95;
    cout << "Marks after **pp = 95: " << marks << endl;

    // Part 2: Pointer to Classroom Object (person*)
    person p_obj;
    person* ptr = &p_obj;

    ptr->input(20);
    ptr->display();

    return 0;
}

/*
Expected Deterministic Output:
Marks via **pp: 85
Marks after **pp = 95: 95
Age: 20
*/
