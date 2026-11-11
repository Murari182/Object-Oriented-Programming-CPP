# 03 — Destructors (`~ClassName()`) and the Rule of Three / Five / Zero

## 1. Properties of a Destructor
- Named `~ClassName()`, takes **no parameters**, cannot be overloaded, and has **no return type**.
- Called automatically when a stack object leaves scope or when `delete` is called on a heap object.

## 2. The Rule of Three, Rule of Five, and Rule of Zero
- **Rule of Three**: If a class requires a custom **Destructor**, **Copy Constructor**, or **Copy Assignment Operator (`operator=`)**, it almost certainly requires all three.
- **Rule of Five (C++11–C++23)**: Adds the **Move Constructor** (`T(T&&) noexcept`) and **Move Assignment Operator** (`T& operator=(T&&) noexcept`).
- **Rule of Zero**: Prefer using standard RAII members (`std::string`, `std::vector`, `std::unique_ptr`) so you don't need to write any custom destructor or copy/move operations at all!
