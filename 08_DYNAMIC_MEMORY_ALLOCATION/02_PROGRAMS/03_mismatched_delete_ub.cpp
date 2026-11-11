// Program Title: Mismatched new[] and Scalar delete Undefined Behavior Explanation
// Topic: Dynamic Memory Allocation — Matching new[] with delete[]
// Purpose: Explain why new int[n] paired with scalar delete (instead of delete[]) is Undefined Behavior.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_dynamic_arrays_and_objects.md
// Program Classification: Category D — Undefined-behavior demonstration

#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5]{1, 2, 3, 4, 5};
    cout << "First element: " << arr[0] << endl;

    // Correct deallocation uses delete[] arr:
    delete[] arr;

    /*
    NOTE ON UNDEFINED BEHAVIOR (Category D):
    If a program writes:
        int* bad = new int[5];
        delete bad; // <-- UNDEFINED BEHAVIOR!
    ISO C++ [expr.delete] states that if the operand of scalar 'delete' was allocated
    via array 'new[]', the behavior is undefined! Modern compilers (-Wmismatched-new-delete)
    diagnose this bug immediately.
    */
    return 0;
}
