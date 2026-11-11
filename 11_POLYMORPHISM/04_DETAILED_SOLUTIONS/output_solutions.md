# Detailed Solutions — Predict the Output & Debugging (Module 11)
- **Q3 Solution**: Non-virtual call executes `super`'s function (early binding on pointer type `super*`); virtual call executes `sub`'s function (late binding on target object type `sub`).
- **Q4 Solution**: Add `using BaseClassName::function_name;` inside the derived class definition.
