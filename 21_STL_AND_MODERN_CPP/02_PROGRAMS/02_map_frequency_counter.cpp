// Program Title: Key-Value Storage Using std::map and Structured Bindings
// Topic: STL and Modern C++ — std::map
// Purpose: Store student roll numbers and marks in a sorted std::map.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_associative_containers_map_and_set.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> roll_to_marks;
    roll_to_marks[102] = 88;
    roll_to_marks[101] = 95;

    for (const auto& [roll, marks] : roll_to_marks) {
        cout << "Roll " << roll << ": " << marks << endl;
    }

    return 0;
}

/*
Expected Deterministic Output:
Roll 101: 95
Roll 102: 88
*/
