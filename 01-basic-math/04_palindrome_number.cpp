// Palindrome Number

// Problem
// Check whether a number is the same when reversed.

// Example
// Input: 121  
// Output: Palindrome  

#include <iostream>
#include <cmath>
using namespace std;

bool isPalindromeNumber(int n) {
    int currentNum = n;
    int revNum = 0;

    while (n) {
        if (revNum > (INT_MAX / 10) || revNum < (INT_MIN / 10)) {
            return false;
        }

        revNum = revNum * 10 + n % 10;
        n /= 10;
    }

    return currentNum == revNum;
}


int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (isPalindromeNumber(num)) {
        cout << num << " is a palindrome number" << endl;
    } else {
        cout << num << " is not a palindrome number" << endl;
    }

    return 0;
}
