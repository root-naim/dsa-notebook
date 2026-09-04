// Largest Digit in a Number

// Problem
// Find the largest digit in a number.

// Example
// Input: 4829  
// Output: 9  

#include <iostream>
#include <cstdlib>
using namespace std;

int largestDigit(int n) {
    int digit = 0;
    n = abs(n);

    while (n) {
        int lastDigit = n % 10;
        digit = (digit < lastDigit) ? lastDigit : digit;
        if (digit == 9) {
            break;
        }

        n /= 10;
    }
    
    return digit;
}


int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int maxDigit = largestDigit(num);

    cout << "Largest digit is : " << maxDigit << endl;

    return 0;
}
