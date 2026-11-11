// Program Title: Friend Function Accessing Private Member of Classroom 'person' Class
// Topic: Friend Functions and Classes
// Purpose: Show how a non-member friend function reads private data of a person object.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_friend_functions_and_rules.md
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

    friend void print_age(const person& p);
};

void print_age(const person& p) {
    cout << "Private age accessed via friend function: " << p.age << endl;
}

int main() {
    person p;
    p.input(20);
    print_age(p);
    return 0;
}

/*
Expected Deterministic Output:
Private age accessed via friend function: 20
*/
