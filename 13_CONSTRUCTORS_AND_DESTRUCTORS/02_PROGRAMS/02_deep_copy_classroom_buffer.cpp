// Program Title: Deep Copy Constructor Preventing Double Deletion
// Topic: Constructors and Destructors — Deep Copy vs. Shallow Copy
// Purpose: Demonstrate a classroom class managing heap memory safely with a Deep Copy constructor.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_copy_constructor_shallow_vs_deep_copy.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class number_box {
private:
    int* ptr;

public:
    number_box(int val) {
        ptr = new int(val);
    }

    // Deep Copy Constructor: allocates a separate int on the heap
    number_box(const number_box& other) {
        ptr = new int(*(other.ptr));
    }

    void set_val(int val) {
        *ptr = val;
    }

    void display() const {
        cout << "Value: " << *ptr << endl;
    }

    ~number_box() {
        delete ptr;
    }
};

int main() {
    number_box b1(50);
    number_box b2 = b1; // Invokes Deep Copy constructor

    b2.set_val(99);     // Modifies only b2's heap integer, leaving b1 untouched!

    b1.display();
    b2.display();

    return 0;
}

/*
Expected Deterministic Output:
Value: 50
Value: 99
*/
