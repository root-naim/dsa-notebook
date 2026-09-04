// Reverse a Number

// Problem
// Given a number `N`, reverse the digits of the number.

// Example:
// `1234` → `4321`
// `-560` → `-65`

#include <iostream>

#include <cmath>

using namespace std;

int reverseNumber(int n) {
    int revNum = 0;

    while (n) {
        if (revNum > (INT_MAX / 10) || revNum < (INT_MIN / 10)) {
            return 0;
        }

        revNum = revNum * 10 + n % 10;
        n /= 10;
    }

    return revNum;
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int revNum = reverseNumber(num);

    cout << "Reversed Number is : " << revNum << endl;

    return 0;
}
