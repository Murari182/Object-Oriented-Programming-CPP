// Program Title: Binary Search Using Pointer Arithmetic
// Topic: Programming Practice — Pointers & Searching
// Purpose: Perform binary search on a sorted array using pointers.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_mathematical_computing_problem_solving.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int binary_search_ptr(const int* arr, int n, int target) {
    const int* low = arr;
    const int* high = arr + (n - 1);

    while (low <= high) {
        const int* mid = low + (high - low) / 2;
        if (*mid == target) {
            return static_cast<int>(mid - arr);
        } else if (*mid < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[6] = {5, 12, 19, 26, 33, 40};
    cout << "Index of 26: " << binary_search_ptr(arr, 6, 26) << endl;
    return 0;
}

/*
Expected Deterministic Output:
Index of 26: 3
*/
