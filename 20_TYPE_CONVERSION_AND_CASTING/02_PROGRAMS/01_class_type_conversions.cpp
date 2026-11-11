// Program Title: Basic-to-Class and Class-to-Basic Type Conversions
// Topic: Type Conversion and Casting — User-Defined Conversions
// Purpose: Demonstrate converting int minutes into a time_duration object and converting back to int.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_implicit_and_user_defined_conversions.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class time_duration {
private:
    int hours;
    int mins;

public:
    // 1. Basic to Class conversion constructor
    time_duration(int total_mins) {
        hours = total_mins / 60;
        mins = total_mins % 60;
    }

    // 2. Class to Basic conversion operator
    operator int() const {
        return (hours * 60) + mins;
    }

    void display() const {
        cout << hours << " hrs " << mins << " mins" << endl;
    }
};

int main() {
    time_duration t = 135; // Implicit int -> time_duration conversion
    t.display();

    int total = t;         // Implicit time_duration -> int conversion
    cout << "Total minutes: " << total << endl;
    return 0;
}

/*
Expected Deterministic Output:
2 hrs 15 mins
Total minutes: 135
*/
