// Program Title: Independent Verification of the 13 Pointer Arithmetic & Dereference Expressions
// Topic: Pointers and References — Pointer Expression Analysis
// Purpose: Demonstrate the exact behavior of *p++, (*p)++, ++*p, *++p, ++(*p), *(++p), *p--, (*p)--, --*p, *--p, *(p+1), *(p-1), and *p+1.
// Target C++ Standard: C++23 (compatible with C++17/C++20)
// Related Theory File: ../01_THEORY/02_pointer_arithmetic_and_13_expressions.md
// Program Classification: Category A — Valid and well-defined program

#include <iostream>
using namespace std;

int main() {
    // 1. Expression: *p++
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = *p++;
        cout << "1. *p++    -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 2. Expression: (*p)++
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = (*p)++;
        cout << "2. (*p)++  -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 3. Expression: ++*p
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = ++*p;
        cout << "3. ++*p    -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 4. Expression: *++p
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = *++p;
        cout << "4. *++p    -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 5. Expression: ++(*p)
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = ++(*p);
        cout << "5. ++(*p)  -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 6. Expression: *(++p)
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = *(++p);
        cout << "6. *(++p)  -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 7. Expression: *p--
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = *p--;
        cout << "7. *p--    -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 8. Expression: (*p)--
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = (*p)--;
        cout << "8. (*p)--  -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 9. Expression: --*p
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = --*p;
        cout << "9. --*p    -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 10. Expression: *--p
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = *--p;
        cout << "10. *--p   -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 11. Expression: *(p + 1)
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = *(p + 1);
        cout << "11. *(p+1) -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 12. Expression: *(p - 1)
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = *(p - 1);
        cout << "12. *(p-1) -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    // 13. Expression: *p + 1
    {
        int arr[3] = {10, 20, 30};
        int* p = &arr[1];
        int res = *p + 1;
        cout << "13. *p+1   -> res=" << res << ", *p=" << *p
             << ", arr={" << arr[0] << "," << arr[1] << "," << arr[2] << "}" << endl;
    }

    return 0;
}

/*
Expected Deterministic Output:
1. *p++    -> res=20, *p=30, arr={10,20,30}
2. (*p)++  -> res=20, *p=21, arr={10,21,30}
3. ++*p    -> res=21, *p=21, arr={10,21,30}
4. *++p    -> res=30, *p=30, arr={10,20,30}
5. ++(*p)  -> res=21, *p=21, arr={10,21,30}
6. *(++p)  -> res=30, *p=30, arr={10,20,30}
7. *p--    -> res=20, *p=10, arr={10,20,30}
8. (*p)--  -> res=20, *p=19, arr={10,19,30}
9. --*p    -> res=19, *p=19, arr={10,19,30}
10. *--p   -> res=10, *p=10, arr={10,20,30}
11. *(p+1) -> res=30, *p=20, arr={10,20,30}
12. *(p-1) -> res=10, *p=20, arr={10,20,30}
13. *p+1   -> res=21, *p=20, arr={10,20,30}
*/
