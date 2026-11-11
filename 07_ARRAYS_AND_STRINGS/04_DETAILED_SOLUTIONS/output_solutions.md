# Detailed Solutions — Predict the Output & Debugging (Module 07)
- **Q4 Solution**: Partial brace initialization `{10, 20}` sets `a[0]=10, a[1]=20` and zero-initializes all remaining elements (`a[2]=0, a[3]=0, a[4]=0`). Output: `10 20 0 0`.
- **Q5 Solution**: `s1 == s2` decays both arrays to pointers (`char*`) and compares their distinct stack addresses (`false`) instead of their characters! Fix 1: Use `std::string s1 = "test", s2 = "test"; if (s1 == s2)`. Fix 2: Use `strcmp(s1, s2) == 0` (`#include <cstring>`).
