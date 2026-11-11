# 02 — Bitwise Operators (`&`, `|`, `^`, `~`, `<<`, `>>`)

- `a & b` (Bitwise AND): `1` only if both bits are `1`. Useful for checking if an integer is odd: `(x & 1) != 0`.
- `a | b` (Bitwise OR): `1` if at least one bit is `1`.
- `a ^ b` (Bitwise XOR): `1` if bits differ (`x ^ x == 0`, `x ^ 0 == x`).
- `x << k` (Left shift): Multiplies by $2^k$ (for non-negative values without overflow).
- `x >> k` (Right shift): Divides by $2^k$.
