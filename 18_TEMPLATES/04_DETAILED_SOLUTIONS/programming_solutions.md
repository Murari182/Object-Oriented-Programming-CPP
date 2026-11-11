# Detailed Solutions — Programming Questions (Module 18)
```cpp
#include <iostream>
using namespace std;

template <typename T>
class simple_stack {
    T data[10];
    int top_idx = -1;
public:
    void push(T val) { data[++top_idx] = val; }
    T pop() { return data[top_idx--]; }
};

int main() {
    simple_stack<int> st;
    st.push(10);
    st.push(20);
    cout << st.pop() << " " << st.pop() << endl;
    return 0;
}
// Expected Output: 20 10
```
