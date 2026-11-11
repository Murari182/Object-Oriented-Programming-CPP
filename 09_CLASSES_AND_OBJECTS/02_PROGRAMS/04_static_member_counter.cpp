// Program Title: Counting Active Objects Using Static Data Member and Static Function
// Topic: Classes and Objects — static Members
// Purpose: Demonstrate shared static data member and static member function in a classroom student class.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_static_members_and_object_arrays.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class student {
private:
    int roll;
    inline static int total_students = 0;

public:
    student(int r) {
        roll = r;
        total_students++;
    }

    static void show_total() {
        cout << "Total students created: " << total_students << endl;
    }
};

int main() {
    student s1(101);
    student s2(102);
    student::show_total();
    return 0;
}

/*
Expected Deterministic Output:
Total students created: 2
*/
