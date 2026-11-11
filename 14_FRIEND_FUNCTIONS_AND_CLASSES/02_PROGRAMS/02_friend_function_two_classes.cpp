// Program Title: Friend Function Bridging Two Classes Using Forward Declaration
// Topic: Friend Functions and Classes — Multi-Class Friend
// Purpose: Sum private values of two distinct classes (alpha and beta) using a common friend function.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_bridging_two_classes_and_friend_class.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class beta; // Forward declaration

class alpha {
private:
    int x;

public:
    alpha(int v) : x(v) {}
    friend int add_both(const alpha& a, const beta& b);
};

class beta {
private:
    int y;

public:
    beta(int v) : y(v) {}
    friend int add_both(const alpha& a, const beta& b);
};

int add_both(const alpha& a, const beta& b) {
    return a.x + b.y;
}

int main() {
    alpha a(35);
    beta b(65);
    cout << "Sum of private members: " << add_both(a, b) << endl;
    return 0;
}

/*
Expected Deterministic Output:
Sum of private members: 100
*/
