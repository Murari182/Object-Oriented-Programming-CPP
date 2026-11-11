# Detailed Solutions — Programming Questions (Module 15)
```cpp
#include <iostream>
using namespace std;

class account {
public:
    virtual void calculate_interest() const = 0;
    virtual ~account() = default;
};

class savings_account : public account {
    int balance;
public:
    savings_account(int b) : balance(b) {}
    void calculate_interest() const override {
        cout << "Savings Interest: " << (balance * 4 / 100) << endl;
    }
};

class current_account : public account {
public:
    void calculate_interest() const override {
        cout << "Current Interest: 0" << endl;
    }
};

int main() {
    savings_account sa(1000);
    current_account ca;
    account* p = &sa;
    p->calculate_interest();
    p = &ca;
    p->calculate_interest();
    return 0;
}
```
