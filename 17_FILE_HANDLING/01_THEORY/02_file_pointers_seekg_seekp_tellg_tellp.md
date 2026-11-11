# 02 — File Position Pointers: `seekg`, `seekp`, `tellg`, and `tellp`

- **`g` stands for "get" (input / `ifstream`)**, and **`p` stands for "put" (output / `ofstream`)**:
  - `tellg()` / `tellp()`: Returns the current byte offset (`streampos`) of the get/put pointer.
  - `seekg(offset, direction)` / `seekp(offset, direction)`: Moves the get/put pointer relative to `ios::beg` (beginning), `ios::cur` (current position), or `ios::end` (end of file).
