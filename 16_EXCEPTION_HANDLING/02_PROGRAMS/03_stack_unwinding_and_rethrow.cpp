// Program Title: Stack Unwinding Destructor Order and Rethrowing (throw;)
// Topic: Exception Handling — Stack Unwinding and Rethrowing
// Purpose: Demonstrate that local objects are destroyed in reverse order during stack unwinding and how throw; rethrows.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_propagation_stack_unwinding_and_rethrow.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class resource_guard {
private:
    int id;

public:
    resource_guard(int i) {
        id = i;
        cout << "Constructed resource_guard " << id << endl;
    }

    ~resource_guard() {
        cout << "Destroyed resource_guard " << id << " during stack unwinding" << endl;
    }
};

void risky_operation() {
    resource_guard g1(1);
    resource_guard g2(2);
    cout << "Throwing exception inside risky_operation..." << endl;
    throw 99;
}

int main() {
    try {
        try {
            risky_operation();
        }
        catch (int err) {
            cout << "Inner catch received " << err << ", rethrowing..." << endl;
            throw; // Rethrows original exception to outer catch
        }
    }
    catch (int err) {
        cout << "Outer catch handled " << err << endl;
    }

    return 0;
}

/*
Expected Deterministic Output:
Constructed resource_guard 1
Constructed resource_guard 2
Throwing exception inside risky_operation...
Destroyed resource_guard 2 during stack unwinding
Destroyed resource_guard 1 during stack unwinding
Inner catch received 99, rethrowing...
Outer catch handled 99
*/
