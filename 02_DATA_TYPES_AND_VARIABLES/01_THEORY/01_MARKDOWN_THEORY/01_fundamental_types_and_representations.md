# 01 — Fundamental Data Types and Two's Complement Representation

![Data Type Hierarchy](../05_DIAGRAMS/diagram_01_data_type_hierarchy.svg)

## 1. Standard Minimum Bit Widths (`[basic.fundamental]`)
- `bool`: 1 byte (`true` or `false`).
- `char`: Guaranteed `sizeof(char) == 1` byte (at least 8 bits). Note: Whether plain `char` is signed or unsigned is **implementation-defined**!
- `short`: At least 16 bits (typically 2 bytes).
- `int`: At least 16 bits (**4 bytes / 32 bits** on all modern 32/64-bit desktop/server platforms, range $-2^{31}$ to $2^{31}-1$).
- `long long`: At least 64 bits (8 bytes).
- `double`: 64-bit IEEE-754 floating-point (~15–17 decimal digits of precision).
