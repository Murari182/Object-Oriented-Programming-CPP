// Program Title: Dynamic Array Using std::vector and Sorting With std::sort
// Topic: STL and Modern C++ — vector and algorithm
// Purpose: Demonstrate push_back(), std::sort(), and range-based for traversal.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_stl_architecture_and_sequence_containers.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {40, 10, 50, 20, 30};
    nums.push_back(5);

    sort(nums.begin(), nums.end());

    cout << "Sorted vector: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

/*
Expected Deterministic Output:
Sorted vector: 5 10 20 30 40 50 
*/
