# Programming Questions — Module 10: Inheritance

**Q12.** Write a complete C++23 classroom-style program demonstrating **Multilevel Inheritance**:
- Class `student` holds `roll` with `set_roll(int)` and `show_roll()`.
- Class `test : public student` holds `marks1` and `marks2` with `set_marks(int, int)` and `show_marks()`.
- Class `result : public test` computes `total = marks1 + marks2` and displays roll, marks, and total.

**Q13.** Write a complete C++23 classroom-style program demonstrating **Hybrid / Diamond Inheritance** using `virtual public`:
- Base class `student` (`roll`).
- Derived class `test : virtual public student` (`academic_marks`).
- Derived class `sports : virtual public student` (`sports_score`).
- Derived class `result : public test, public sports` that sums `academic_marks + sports_score` and prints the complete scorecard.
