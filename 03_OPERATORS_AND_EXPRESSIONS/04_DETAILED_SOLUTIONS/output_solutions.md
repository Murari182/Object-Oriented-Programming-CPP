# Detailed Solutions — Predict the Output & Debugging (Module 03)
- **Q3 Solution**: Because `(a == 1)` is `true`, `||` short-circuits and skips `(++b == 2)`, so `b` remains `1`. Output: `1 1`.
- **Q4 Solution**: `(a + b) / 2` performs integer division `11 / 2 == 5` before converting to `double` (`5.0`). Fix: `(a + b) / 2.0`.
