# Detailed Solutions — Programming Questions (Module 08)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int* arr = new int[n]{10, 20, 30, 40};
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Average: " << (sum / n) << endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}
// Expected Output: Average: 25
```
