// Program Title: Safe Bounds Checking With std::vector::at()
// Topic: STL and Modern C++ — Exception-Safe Element Access
// Purpose: Show how v.at(index) throws std::out_of_range on an invalid index.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_stl_architecture_and_sequence_containers.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    try {
        cout << "Element at 1: " << v.at(1) << endl;
        cout << "Element at 10: " << v.at(10) << endl;
    }
    catch (const out_of_range& e) {
        cout << "Caught out_of_range exception safely!" << endl;
    }

    return 0;
}

/*
Expected Deterministic Output:
Element at 1: 20
Caught out_of_range exception safely!
*/
