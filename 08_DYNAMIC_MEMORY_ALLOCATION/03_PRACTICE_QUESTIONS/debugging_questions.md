# Debugging Questions — Module 08
**Q4.** Find the memory leak in:
```cpp
void compute() {
    int* p = new int(5);
    int x = *p * 2;
    p = &x;
    delete p;
}
```
