# Detailed Solutions — Programming Questions (Module 10: Inheritance)

### Solution to Q12 (Multilevel Inheritance: `student -> test -> result`)

```cpp
#include <iostream>
using namespace std;

class student {
protected:
    int roll;

public:
    void set_roll(int r) {
        roll = r;
    }

    void show_roll() {
        cout << "Roll No: " << roll << endl;
    }
};

class test : public student {
protected:
    int marks1;
    int marks2;

public:
    void set_marks(int m1, int m2) {
        marks1 = m1;
        marks2 = m2;
    }

    void show_marks() {
        cout << "Marks: " << marks1 << ", " << marks2 << endl;
    }
};

class result : public test {
private:
    int total;

public:
    void display() {
        total = marks1 + marks2;
        show_roll();
        show_marks();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    result r;
    r.set_roll(101);
    r.set_marks(88, 92);
    r.display();
    return 0;
}
/*
Expected Output:
Roll No: 101
Marks: 88, 92
Total Marks: 180
*/
```

---

### Solution to Q13 (Hybrid Diamond Inheritance with `virtual public`)

```cpp
#include <iostream>
using namespace std;

class student {
protected:
    int roll;

public:
    void set_roll(int r) {
        roll = r;
    }

    void show_roll() {
        cout << "Roll No: " << roll << endl;
    }
};

class test : virtual public student {
protected:
    int academic_marks;

public:
    void set_academic(int m) {
        academic_marks = m;
    }
};

class sports : virtual public student {
protected:
    int sports_score;

public:
    void set_sports(int s) {
        sports_score = s;
    }
};

class result : public test, public sports {
public:
    void display() {
        int total = academic_marks + sports_score;
        show_roll();
        cout << "Academic: " << academic_marks
             << ", Sports: " << sports_score
             << ", Final Total: " << total << endl;
    }
};

int main() {
    result res;
    res.set_roll(202);
    res.set_academic(85);
    res.set_sports(10);
    res.display();
    return 0;
}
/*
Expected Output:
Roll No: 202
Academic: 85, Sports: 10, Final Total: 95
*/
```
