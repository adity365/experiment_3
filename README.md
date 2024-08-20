## SIZE COMPARISON
# EXPERIMENT 3
# AIM
To study and implement C++ Program Structure 

# THEORY
The sizeof operator in C++ shows the size in bytes of a data type or variable. It's evaluated at compile-time, returns a size value, and is commonly used for:

Checking data type sizes,
Memory allocation,
Array size calculations.

It works with variables, types, and expressions. The size can vary across platforms. It's particularly useful for low-level memory management and ensuring code portability.

# CODE
```
// Aditya Agarwal
// 23070123162
#include <iostream>
using namespace std;

int main() {

    char ch = 'A';
    int a = 2;
    short int b = 4;
    long int c = 5;
    float d = 6.7;
    double e = 4.67;
    wchar_t f =  'Aditya';

    cout << "size of char : " << sizeof(ch) << endl;
    cout << "size of int : " << sizeof(a) << endl;
    cout << "size of short int : " << sizeof(b) << endl;
    cout << "size of long int : " << sizeof(c) << endl;
    cout << "size of float : " << sizeof(d) << endl;
    cout << "size of double : " << sizeof(e) << endl;
    cout << "size of wchar_t : " << sizeof(f) << endl;
    
}
```
## OUTPUT
![image](https://github.com/user-attachments/assets/04d9084c-fa98-44b5-975f-5fc6a4d8044c)


# CONCLUSION

LEARNT HOW TO CHECK THE SIZE OF ANY OPERATOR IN C++.
