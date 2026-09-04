// Count Digits

// Problem
// Given a number `N`, count how many digits are present in the number.

// Example:
// `12345` → 5 digits
// `0` → 1 digits

#include <iostream>
using namespace std;

int countDigit(int n) {
    if (n == 0) return 1;
    
    int digit = 0;

    while (n) {
        digit++;
        n /= 10;
    }

    return digit;
}


int main() {
    int n; 
    cout << "Enter a number : ";
    cin >> n;

    int digits = countDigit(n);

    cout << n << " has total " << digits << " digit/s" << endl;

    return 0;
}
