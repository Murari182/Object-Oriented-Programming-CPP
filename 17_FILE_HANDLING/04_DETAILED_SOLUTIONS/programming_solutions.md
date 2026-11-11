# Detailed Solutions — Programming Questions (Module 17)
```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream fin("source.txt");
    ofstream fout("dest.txt");
    string word;
    int count = 0;
    while (fin >> word) {
        fout << word << " ";
        count++;
    }
    cout << "Words copied: " << count << endl;
    return 0;
}
```
