// Program Title: Unary Operator Overloading (Unary Minus, Prefix ++, and Postfix ++)
// Topic: Operator Overloading — Unary Operators
// Purpose: Demonstrate prefix ++obj, postfix obj++ (with dummy int), and unary -obj in a classroom class.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_unary_and_binary_member_vs_friend.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class counter {
private:
    int count;

public:
    counter(int c = 0) {
        count = c;
    }

    // Unary minus (-obj): returns a new counter with negated value
    counter operator-() const {
        return counter(-count);
    }

    // Prefix increment (++obj): increments first, returns updated object
    counter& operator++() {
        ++count;
        return *this;
    }

    // Postfix increment (obj++): dummy 'int' parameter distinguishes it from prefix ++
    counter operator++(int) {
        counter old = *this;
        count++;
        return old;
    }

    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    counter c(10);

    counter c_pre = ++c;   // c becomes 11, c_pre is 11
    c_pre.display();

    counter c_post = c++;  // c_post gets old value 11, c becomes 12
    c_post.display();
    c.display();

    counter c_neg = -c;    // c_neg is -12
    c_neg.display();

    return 0;
}

/*
Expected Deterministic Output:
Count: 11
Count: 11
Count: 12
Count: -12
*/
