// Program Title: Classroom Class Template With Two Type Parameters
// Topic: Templates — Class Templates
// Purpose: Demonstrate a generic key-value pair class template.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_class_templates_and_specialization.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class key_value {
private:
    T1 key;
    T2 val;

public:
    key_value(T1 k, T2 v) : key(k), val(v) {}

    void display() const {
        cout << "Key: " << key << ", Value: " << val << endl;
    }
};

int main() {
    key_value<int, double> kv(101, 98.5);
    kv.display();
    return 0;
}

/*
Expected Deterministic Output:
Key: 101, Value: 98.5
*/
