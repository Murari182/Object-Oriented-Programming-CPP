# Debugging Questions — Module 10: Inheritance

**Q10.** Identify why the following classroom program fails to compile and show how to fix it without making `age` public in `person`:
```cpp
class person {
private:
    int age;
};

class student : public person {
public:
    void set(int a) {
        age = a; // Error here
    }
};
```

**Q11.** Identify why calling `obj.greet()` is ambiguous in the following multiple inheritance program and provide the exact fix in `main()`:
```cpp
#include <iostream>
using namespace std;

class father {
public:
    void greet() { cout << "Hello from father\n"; }
};

class mother {
public:
    void greet() { cout << "Hello from mother\n"; }
};

class child : public father, public mother {
};

int main() {
    child obj;
    obj.greet();
    return 0;
}
```
