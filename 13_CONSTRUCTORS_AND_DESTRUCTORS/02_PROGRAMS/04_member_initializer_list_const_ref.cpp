// Program Title: Initializing const and Reference Data Members via Member Initializer List
// Topic: Constructors and Destructors — Member Initializer Lists
// Purpose: Show how const and reference members are initialized using ': roll(r), score_ref(s)'.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_constructors_types_and_initializer_lists.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class student {
private:
    const int roll;
    int& score_ref;

public:
    student(int r, int& s) : roll(r), score_ref(s) {
    }

    void display() const {
        cout << "Roll: " << roll << ", Score: " << score_ref << endl;
    }
};

int main() {
    int external_score = 95;
    student s(101, external_score);
    s.display();
    return 0;
}

/*
Expected Deterministic Output:
Roll: 101, Score: 95
*/
