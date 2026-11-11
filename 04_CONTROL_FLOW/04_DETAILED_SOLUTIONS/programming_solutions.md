# Detailed Solutions — Programming Questions (Module 04)
```cpp
#include <iostream>
using namespace std;
int main() {
    int n = 1221, original = 1221, rev = 0;
    while (n > 0) {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    cout << "Reversed: " << rev << ", Palindrome: " << (original == rev) << endl;
    return 0;
}
```
