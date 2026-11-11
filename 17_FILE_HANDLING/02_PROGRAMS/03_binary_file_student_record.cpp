// Program Title: Binary File Read and Write of a Classroom Pod Struct/Class
// Topic: File Handling — Binary Files (write and read)
// Purpose: Demonstrate binary serialization of a trivially-copyable classroom student record.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/03_text_vs_binary_files_and_eof.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
#include <fstream>
using namespace std;

class student_record {
public:
    int roll;
    int marks;
};

int main() {
    student_record s_out{105, 97};
    {
        ofstream fout("student.bin", ios::binary);
        fout.write(reinterpret_cast<const char*>(&s_out), sizeof(s_out));
    }

    student_record s_in{0, 0};
    {
        ifstream fin("student.bin", ios::binary);
        fin.read(reinterpret_cast<char*>(&s_in), sizeof(s_in));
    }

    cout << "Read from binary file -> Roll: " << s_in.roll << ", Marks: " << s_in.marks << endl;
    return 0;
}

/*
Expected Deterministic Output:
Read from binary file -> Roll: 105, Marks: 97
*/
