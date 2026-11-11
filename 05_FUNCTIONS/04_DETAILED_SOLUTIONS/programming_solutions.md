# Detailed Solutions — Programming Questions (Module 05)
```cpp
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    cout << "GCD(48, 18) = " << gcd(48, 18) << endl;
    return 0;
}
// Expected Output: GCD(48, 18) = 6
```
