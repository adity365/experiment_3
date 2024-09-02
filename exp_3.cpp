// arithematic operator
// assignment operator
// comparison operator
// bitwise operator
// Aditya Agarwal
// 23070123162
#include <iostream>
using namespace std;

int main(){
    int a, b, sum, diff, prod, div, mod;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    // Assignment operator 
    sum = a + b;
    cout << "The sum of the two numbers entered is: " << sum << endl;

    diff = a - b;
    cout << "The difference of the two numbers entered is: " << diff << endl;

    prod = a * b;
    cout << "The product of the two numbers entered is: " << prod << endl;

    div = a / b;
    cout << "The division of the two numbers entered is: " << div << endl;

    mod = a % b;
    cout << "The remainder obtained when we divide two numbers is: " << mod << endl;

    // Comparison operator
    if (a > b) {
        cout << "First number entered is greater" << endl;
    } else if (a < b) {
        cout << "Second number entered is greater" << endl;
    } else {
        cout << "Both numbers are equal" <<endl;
    }

}