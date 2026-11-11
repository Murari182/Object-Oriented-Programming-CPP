# Detailed Solutions — Predict the Output & Debugging (Module 01)
- **Q3 Solution**: Both output `A` followed by a newline character, but `endl` additionally flushes the output stream buffer (`cout.flush()`).
- **Q4 Solution**: Replace `<iostream.h>` with `<iostream>`, remove `<conio.h>` and `clrscr()`, add `using namespace std;`, and change `void main()` to `int main()`.
