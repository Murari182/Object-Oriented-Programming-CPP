# Detailed Solutions — Predict the Output & Debugging (Module 18)
- **Q3 Solution**: Each distinct template instantiation (`count_calls<int>` vs `count_calls<double>`) is a separate function with its own independent `static int count` variable!
- **Q4 Solution**: Specify the template argument explicitly: `get_max<double>(5, 7.2)`.
