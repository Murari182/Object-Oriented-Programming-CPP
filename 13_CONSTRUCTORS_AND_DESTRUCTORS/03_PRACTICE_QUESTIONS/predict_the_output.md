# Predict the Output Questions — Module 13
**Q3.** Predict the output of:
```cpp
#include <iostream>
using namespace std;
class test {
    int a;
    int b;
public:
    test(int x) : b(x), a(b + 10) {
        cout << a << " " << b << endl;
    }
};
```
*(Hint: In what order are `a` and `b` initialized?)*
