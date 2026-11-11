# Detailed Solutions — Programming Questions (Module 07)
### Solution to Q6 (Matrix Transpose & Symmetry Check)
```cpp
#include <iostream>
using namespace std;

int main() {
    int m[3][3] = {{1, 2, 3}, {2, 5, 6}, {3, 6, 9}};
    bool symmetric = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m[i][j] != m[j][i]) {
                symmetric = false;
            }
        }
    }

    cout << "Is symmetric? " << symmetric << endl;
    return 0;
}
// Expected Output: Is symmetric? 1
```
