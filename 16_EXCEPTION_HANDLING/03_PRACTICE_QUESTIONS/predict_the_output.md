# Predict the Output Questions — Module 16: Exception Handling

**Q5.** Predict the output:
```cpp
#include <iostream>
using namespace std;

class item {
    int id;
public:
    item(int i) : id(i) { cout << "C" << id << " "; }
    ~item() { cout << "D" << id << " "; }
};

int main() {
    try {
        item a(1);
        item b(2);
        throw 10;
        item c(3);
    }
    catch (int x) {
        cout << "Caught:" << x << " ";
    }
    cout << "End" << endl;
    return 0;
}
```

**Q6.** Predict the output (Base vs. Derived exception catching by reference):
```cpp
#include <iostream>
using namespace std;

class base_err {
public:
    virtual void msg() const { cout << "BaseError\n"; }
};

class derived_err : public base_err {
public:
    void msg() const override { cout << "DerivedError\n"; }
};

int main() {
    try {
        throw derived_err();
    }
    catch (const base_err& e) {
        e.msg();
    }
    return 0;
}
```
