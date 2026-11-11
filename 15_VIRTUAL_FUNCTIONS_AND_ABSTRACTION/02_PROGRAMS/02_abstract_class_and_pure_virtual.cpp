// Program Title: Abstract Base Class with Pure Virtual Function (= 0)
// Topic: Virtual Functions and Abstraction — Abstract Classes
// Purpose: Demonstrate an abstract class 'shape' and concrete derived classes 'square' and 'rectangle'.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_pure_virtual_functions_and_abstract_classes.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class shape {
public:
    virtual int area() const = 0; // Pure virtual function
    virtual ~shape() = default;
};

class square : public shape {
private:
    int side;

public:
    square(int s) : side(s) {}

    int area() const override {
        return side * side;
    }
};

int main() {
    square sq(6);
    shape* ptr = &sq;
    cout << "Square area via abstract pointer: " << ptr->area() << endl;
    return 0;
}

/*
Expected Deterministic Output:
Square area via abstract pointer: 36
*/
