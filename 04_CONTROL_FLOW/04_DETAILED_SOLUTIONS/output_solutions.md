# Detailed Solutions — Predict the Output & Debugging (Module 04)
- **Q3 Solution**: Without `break;`, execution falls through and runs all subsequent `case` blocks until a `break;` or the end of the `switch` block is reached.
- **Q4 Solution**: The stray semicolon `;` right after `for (...)` terminates the loop with an empty body, and `i` is out of scope in `{ cout << i; }`.
