# Detailed Solutions — Module 22
```cpp
#include <iostream>
using namespace std;
class vector3d {
    int x, y, z;
public:
    vector3d(int a = 0, int b = 0, int c = 0) : x(a), y(b), z(c) {}
    int operator*(const vector3d& v) const { return x*v.x + y*v.y + z*v.z; }
};
int main() {
    vector3d u(1, 2, 3), v(4, 5, 6);
    cout << "Dot product: " << (u * v) << endl;
    return 0;
}
// Expected Output: Dot product: 32
```
