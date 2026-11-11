# Detailed Solutions — Programming Questions (Module 20)
```cpp
#include <iostream>
using namespace std;
class rupee {
    int inr;
public:
    rupee(int r) : inr(r) {}
    int get_inr() const { return inr; }
};
class dollar {
    int usd;
public:
    dollar(const rupee& r) : usd(r.get_inr() / 80) {}
    void show() const { cout << "USD: " << usd << endl; }
};
int main() {
    rupee r(400);
    dollar d = r;
    d.show();
    return 0;
}
```
