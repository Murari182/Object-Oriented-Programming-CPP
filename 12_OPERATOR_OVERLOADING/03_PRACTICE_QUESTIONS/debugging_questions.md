# Debugging Questions — Module 12: Operator Overloading

**Q9.** Identify why the following `operator+` inside `complex_system` unintentionally mutates `c1` during `c3 = c1 + c2;`, and rewrite `operator+` correctly:
```cpp
class complex_system {
public:
    int real, imag;
    complex_system(int r = 0, int i = 0) : real(r), imag(i) {}
    complex_system operator+(const complex_system& obj) {
        real = real + obj.real;
        imag = imag + obj.imag;
        return *this;
    }
};
```

**Q10.** Identify why `complex_system c2 = 5 + c1;` fails to compile when `operator+` is a member function of `complex_system`, and show how to fix it.
