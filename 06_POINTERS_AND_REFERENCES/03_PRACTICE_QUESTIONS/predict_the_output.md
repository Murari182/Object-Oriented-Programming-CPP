# Predict the Output Questions — Module 06: Pointers and References (Questions 11–20)

### Level 1 — Beginner

**Q11.** Predict the exact output of the following program:
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 15;
    int* p = &x;
    *p = *p + 10;
    cout << x << " " << *p << endl;
    return 0;
}
```

**Q12.** Predict the exact output:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int& ref = a;
    ref = b;
    ref = ref + 3;
    cout << a << " " << b << endl;
    return 0;
}
```

### Level 2 — Intermediate

**Q13.** Predict the output (testing `*p++` vs `(*p)++`):
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* p = &arr[0];
    cout << *p++ << " ";
    cout << (*p)++ << " ";
    cout << arr[0] << " " << arr[1] << " " << *p << endl;
    return 0;
}
```

**Q14.** Predict the output (testing `++*p` vs `*++p`):
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* p = &arr[0];
    cout << ++*p << " ";
    cout << *++p << " ";
    cout << arr[0] << " " << arr[1] << " " << *p << endl;
    return 0;
}
```

**Q15.** Predict the output (testing `*p--`, `--*p`, and `*--p`):
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {100, 200, 300};
    int* p = &arr[2];
    cout << *p-- << " ";
    cout << --*p << " ";
    cout << *--p << " ";
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    return 0;
}
```

### Level 3 — Advanced

**Q16.** Predict the output (testing `*(p + 1)`, `*(p - 1)`, and `*p + 1`):
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {4, 8, 12};
    int* p = &arr[1];
    cout << *(p + 1) << " " << *(p - 1) << " " << (*p + 1) << " " << *p << endl;
    return 0;
}
```

**Q17.** Predict the output (Double pointer `int**` manipulation):
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;
    int* p = &x;
    int** pp = &p;
    **pp = 15;
    *pp = &y;
    **pp = 25;
    cout << x << " " << y << " " << *p << endl;
    return 0;
}
```

**Q18.** Predict the output (Pointer difference `q - p`):
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int* p = &arr[1];
    int* q = &arr[4];
    cout << (q - p) << " " << *(p + (q - p) / 2) << endl;
    return 0;
}
```

### Level 4 — University Examination Level

**Q19.** Predict the output (Passing pointer by value vs. pointer by reference):
```cpp
#include <iostream>
using namespace std;

int global_x = 100;

void try_reassign(int* ptr) {
    ptr = &global_x;
}

void real_reassign(int*& ptr) {
    ptr = &global_x;
}

int main() {
    int local_a = 10;
    int* p = &local_a;
    try_reassign(p);
    cout << *p << " ";
    real_reassign(p);
    cout << *p << endl;
    return 0;
}
```

**Q20.** Does the following program have a guaranteed output under the C++23 standard? Explain why or why not:
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    int* p = arr;
    int ans = (*p++) * (*p++);
    cout << ans << endl;
    return 0;
}
```
