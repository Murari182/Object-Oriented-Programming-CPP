// Program Title: Friend Class Accessing Private Data of Another Class
// Topic: Friend Functions and Classes — friend class
// Purpose: Demonstrate declaring 'friend class result_printer;' inside 'class student'.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_bridging_two_classes_and_friend_class.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class student {
private:
    int roll;
    int marks;

public:
    student(int r, int m) : roll(r), marks(m) {}

    friend class result_printer;
};

class result_printer {
public:
    void show(const student& s) const {
        cout << "Roll: " << s.roll << ", Marks: " << s.marks << endl;
    }
};

int main() {
    student s(101, 94);
    result_printer rp;
    rp.show(s);
    return 0;
}

/*
Expected Deterministic Output:
Roll: 101, Marks: 94
*/
