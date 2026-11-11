# 02 — Class Templates and Template Specialization

```cpp
template <typename T>
class storage_box {
private:
    T value;
public:
    storage_box(T v) : value(v) {}
    void display() const { cout << value << endl; }
};
```
In `main()`, you create instances such as `storage_box<int> b1(42);` and `storage_box<double> b2(3.14);`.
