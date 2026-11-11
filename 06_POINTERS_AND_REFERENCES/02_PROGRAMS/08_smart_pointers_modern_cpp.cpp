// Program Title: Classroom Raw Pointer vs. Modern C++ Smart Pointers
// Topic: Pointers and References — std::unique_ptr and std::shared_ptr
// Purpose: Show how std::unique_ptr and std::shared_ptr manage a classroom 'person' object without manual delete.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/04_memory_hazards_and_smart_pointers.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
#include <memory>
using namespace std;

class person {
private:
    int age;

public:
    void input(int a) {
        age = a;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    // 1. Exclusive ownership using std::unique_ptr
    unique_ptr<person> u_ptr = make_unique<person>();
    u_ptr->input(21);
    u_ptr->display();

    // 2. Shared ownership using std::shared_ptr
    shared_ptr<person> s_ptr1 = make_shared<person>();
    s_ptr1->input(22);
    {
        shared_ptr<person> s_ptr2 = s_ptr1;
        cout << "Shared reference count inside inner block: " << s_ptr1.use_count() << endl;
        s_ptr2->display();
    }
    cout << "Shared reference count after inner block: " << s_ptr1.use_count() << endl;

    return 0;
}

/*
Expected Deterministic Output:
Age: 21
Shared reference count inside inner block: 2
Age: 22
Shared reference count after inner block: 1
*/
