# Detailed Solutions — Programming Questions (Module 03)
```cpp
#include <iostream>
using namespace std;
int main() {
    int n = 16;
    bool is_pow2 = (n > 0) && ((n & (n - 1)) == 0);
    cout << "Is 16 power of 2? " << is_pow2 << endl;
    return 0;
}
```
