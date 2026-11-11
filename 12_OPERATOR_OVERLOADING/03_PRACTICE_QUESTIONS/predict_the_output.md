# Predict the Output Questions — Module 12: Operator Overloading

### Level 1 — Beginner
**Q7.** Predict the output:
```cpp
#include <iostream>
using namespace std;

class complex_system {
    int real, imag;
public:
    complex_system(int r = 0, int i = 0) : real(r), imag(i) {}
    complex_system operator+(const complex_system& c) const {
        return complex_system(real + c.real, imag + c.imag);
    }
    void Show_Num() const {
        cout << real << "+" << imag << "i ";
    }
};

int main() {
    complex_system a(2, 5), b(3, 1);
    complex_system c = a + b + a;
    c.Show_Num();
    cout << endl;
    return 0;
}
```

### Level 2 — Intermediate
**Q8.** Predict the output (Prefix vs. Postfix `++`):
```cpp
#include <iostream>
using namespace std;

class box {
    int val;
public:
    box(int v = 0) : val(v) {}
    box& operator++() {
        val += 5;
        return *this;
    }
    box operator++(int) {
        box temp = *this;
        val += 10;
        return temp;
    }
    void show() const { cout << val << " "; }
};

int main() {
    box b(10);
    box b1 = ++b;
    box b2 = b++;
    b1.show();
    b2.show();
    b.show();
    cout << endl;
    return 0;
}
```
