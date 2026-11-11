# Detailed Solutions — Programming Questions (Module 09)
```cpp
#include <iostream>
using namespace std;

class employee {
private:
    int id;
    int salary;
public:
    void input(int i, int s) { id = i; salary = s; }
    void display() const { cout << "ID: " << id << ", Salary: " << salary << endl; }
};

int main() {
    employee emp[3];
    emp[0].input(1, 50000);
    emp[1].input(2, 60000);
    emp[2].input(3, 70000);
    for (int i = 0; i < 3; i++) emp[i].display();
    return 0;
}
```
