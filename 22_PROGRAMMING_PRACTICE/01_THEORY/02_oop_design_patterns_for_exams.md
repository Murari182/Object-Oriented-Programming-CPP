# 02 — Exam Strategy: How to Structure Any University OOP Question

1. **Identify Data Members (`private:` or `protected:`)**: Keep state minimal (e.g., `int num, den;` for fractions).
2. **Provide a Default + Parameterized Constructor**: `fraction(int n = 0, int d = 1)`.
3. **Write Clean Member Functions (`input()`, `display()`)** and required operator overloads (`operator+`).
4. **Demonstrate in `int main()`**: Create 2 objects, perform the operation, and call `display()`.
