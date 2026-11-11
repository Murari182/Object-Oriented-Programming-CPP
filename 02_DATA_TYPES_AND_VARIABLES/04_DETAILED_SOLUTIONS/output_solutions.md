# Detailed Solutions — Predict the Output & Debugging (Module 02)
- **Q3 Solution**: Unsigned integers obey well-defined modulo $2^N$ arithmetic (`0U - 1U` wraps to `UINT_MAX`), whereas signed integer overflow is Undefined Behavior.
- **Q4 Solution**: `int sum;` is uninitialized (contains indeterminate value), so `sum += i;` has Undefined Behavior! Initialize `int sum = 0;`.
