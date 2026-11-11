# Detailed Solutions — Programming Questions (Module 11)
```cpp
#include <iostream>
using namespace std;

class shape {
public:
    virtual void area() const { cout << "Generic shape
"; }
    virtual ~shape() = default;
};

class rectangle : public shape {
    int l, b;
public:
    rectangle(int x, int y) : l(x), b(y) {}
    void area() const override { cout << "Rectangle area: " << (l * b) << endl; }
};

int main() {
    rectangle r(5, 4);
    shape* s = &r;
    s->area();
    return 0;
}
// Expected Output: Rectangle area: 20
```
