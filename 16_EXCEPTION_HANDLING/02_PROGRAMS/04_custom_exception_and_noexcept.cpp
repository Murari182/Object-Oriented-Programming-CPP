// Program Title: Custom Classroom Exception Class and noexcept Member Function
// Topic: Exception Handling — Custom Exceptions, Strong Guarantee, and noexcept
// Purpose: Demonstrate a custom exception class in a classroom bank_account with Strong Guarantee withdrawal.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_standard_and_custom_exception_classes.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

class insufficient_funds_error {
private:
    int requested;
    int available;

public:
    insufficient_funds_error(int req, int avail) {
        requested = req;
        available = avail;
    }

    void show_error() const noexcept {
        cout << "Exception: Requested " << requested
             << ", but available balance is only " << available << endl;
    }
};

class bank_account {
private:
    int balance;

public:
    bank_account(int initial) {
        balance = initial;
    }

    // Strong Exception Guarantee: if withdrawal fails, balance remains completely unchanged!
    void withdraw(int amount) {
        if (amount > balance) {
            throw insufficient_funds_error(amount, balance);
        }
        balance = balance - amount;
    }

    int get_balance() const noexcept {
        return balance;
    }
};

int main() {
    bank_account acc(1000);

    try {
        acc.withdraw(400);
        cout << "Balance after 400 withdrawal: " << acc.get_balance() << endl;
        acc.withdraw(800); // Throws insufficient_funds_error
    }
    catch (const insufficient_funds_error& err) {
        err.show_error();
    }

    cout << "Balance remains unchanged after failed withdrawal: " << acc.get_balance() << endl;
    return 0;
}

/*
Expected Deterministic Output:
Balance after 400 withdrawal: 600
Exception: Requested 800, but available balance is only 600
Balance remains unchanged after failed withdrawal: 600
*/
