# Detailed Solutions — Predict the Output & Debugging (Module 21)
- **Q3 Solution**: `std::set` keeps unique keys in sorted ascending order: `10 20 30`.
- **Q4 Solution**: Reallocation allocates a new heap buffer and frees the old buffer, **invalidating all previous pointers, references, and iterators** into the vector!
