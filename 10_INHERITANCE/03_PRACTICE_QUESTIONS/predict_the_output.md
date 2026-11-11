# Predict the Output Questions — Module 10: Inheritance

### Level 1 — Beginner
**Q7.** Predict the output:
```cpp
#include <iostream>
using namespace std;

class base {
public:
    void show() { cout << "Base "; }
};

class derived : public base {
public:
    void show() { cout << "Derived "; }
};

int main() {
    derived d;
    d.show();
    d.base::show();
    cout << endl;
    return 0;
}
```

### Level 2 — Intermediate
**Q8.** Predict the output:
```cpp
#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A "; }
    ~A() { cout << "~A "; }
};

class B {
public:
    B() { cout << "B "; }
    ~B() { cout << "~B "; }
};

class C : public B, public A {
public:
    C() { cout << "C "; }
    ~C() { cout << "~C "; }
};

int main() {
    C obj;
    return 0;
}
```

### Level 3 — Advanced
**Q9.** Predict the output (Virtual base constructor order):
```cpp
#include <iostream>
using namespace std;

class V {
public:
    V() { cout << "V "; }
};

class A : public V {
public:
    A() { cout << "A "; }
};

class B : virtual public V {
public:
    B() { cout << "B "; }
};

class D : public A, public B {
public:
    D() { cout << "D "; }
};

int main() {
    D obj;
    cout << endl;
    return 0;
}
```
*(Hint: Note carefully that `B` inherits `V` virtually, while `A` inherits `V` non-virtually!)*
