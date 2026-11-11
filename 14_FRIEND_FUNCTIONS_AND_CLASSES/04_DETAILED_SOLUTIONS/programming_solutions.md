# Detailed Solutions — Programming Questions (Module 14)
```cpp
#include <iostream>
using namespace std;

class class_b;
class class_a {
    int a;
public:
    class_a(int v) : a(v) {}
    void show() const { cout << "a=" << a << " "; }
    friend void swap_private(class_a& x, class_b& y);
};

class class_b {
    int b;
public:
    class_b(int v) : b(v) {}
    void show() const { cout << "b=" << b << endl; }
    friend void swap_private(class_a& x, class_b& y);
};

void swap_private(class_a& x, class_b& y) {
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main() {
    class_a obj1(10);
    class_b obj2(20);
    swap_private(obj1, obj2);
    obj1.show();
    obj2.show();
    return 0;
}
// Expected Output: a=20 b=10
```
