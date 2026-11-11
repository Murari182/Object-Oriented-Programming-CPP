# Detailed Solutions — Programming Questions (Module 13)
```cpp
#include <iostream>
using namespace std;

class dynamic_array {
private:
    int size;
    int* arr;
public:
    dynamic_array(int s) : size(s), arr(new int[s]{}) {}

    dynamic_array(const dynamic_array& other) : size(other.size), arr(new int[other.size]) {
        for (int i = 0; i < size; i++) arr[i] = other.arr[i];
    }

    dynamic_array& operator=(const dynamic_array& other) {
        if (this != &other) {
            delete[] arr;
            size = other.size;
            arr = new int[size];
            for (int i = 0; i < size; i++) arr[i] = other.arr[i];
        }
        return *this;
    }

    ~dynamic_array() { delete[] arr; }
};

int main() {
    dynamic_array a(3);
    dynamic_array b = a;
    return 0;
}
```
