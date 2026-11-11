// Program Title: Writing to and Reading from a Text File Using ofstream and ifstream
// Topic: File Handling — Text Files
// Purpose: Demonstrate writing student data to a file and reading it back safely using while(getline(...)).
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/01_fstream_classes_and_modes.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    {
        ofstream fout("notes_sample.txt");
        fout << "Roll 101: 95" << endl;
        fout << "Roll 102: 88" << endl;
    } // fout automatically closes via RAII destructor here

    ifstream fin("notes_sample.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }

    return 0;
}

/*
Expected Deterministic Output:
Roll 101: 95
Roll 102: 88
*/
