// Program Title: Random File Access Using seekg() and tellg()
// Topic: File Handling — File Position Pointers
// Purpose: Demonstrate measuring file size with seekg(0, ios::end) and tellg().
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_file_pointers_seekg_seekp_tellg_tellp.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    {
        ofstream fout("data_bytes.txt", ios::out | ios::trunc);
        fout << "ABCDEFGH";
    }

    ifstream fin("data_bytes.txt");
    fin.seekg(0, ios::end);
    cout << "Total bytes in file: " << fin.tellg() << endl;

    fin.seekg(3, ios::beg);
    char ch;
    fin.get(ch);
    cout << "Character at offset 3: " << ch << endl;

    return 0;
}

/*
Expected Deterministic Output:
Total bytes in file: 8
Character at offset 3: D
*/
