# 03 — Text vs. Binary Files and Why `while (!fin.eof())` is an Anti-Pattern

## Why `while (!fin.eof())` Reads the Last Line Twice
`eofbit` is set **only after** a read operation tries to read past the end of the file and fails! If you loop on `while (!fin.eof()) { fin >> x; cout << x; }`, after reading the last item, `eof()` is still `false`; the loop runs one extra time, `fin >> x` fails, and `cout << x` prints the previous value of `x` a second time!
- **Correct Idiom**: Loop directly on the read expression: `while (fin >> x)` or `while (getline(fin, line))`.
