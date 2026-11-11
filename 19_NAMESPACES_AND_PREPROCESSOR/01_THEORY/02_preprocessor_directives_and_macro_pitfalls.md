# 02 — Preprocessor Macros (`#define`) vs. `constexpr` and `inline`

### Why `#define SQUARE(x) x * x` is Dangerous
1. **Operator Precedence Bug**: `SQUARE(3 + 2)` expands textually to `3 + 2 * 3 + 2 = 11` instead of `25`!
2. **Multiple Evaluation Bug**: Even with parentheses `#define SQUARE(x) ((x) * (x))`, calling `SQUARE(++a)` expands to `((++a) * (++a))` (Undefined Behavior!).
3. **Modern Fix**: Use `constexpr int square(int x) { return x * x; }`.
