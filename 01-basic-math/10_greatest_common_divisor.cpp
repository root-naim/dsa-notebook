// GCD / HCF

// Problem
// Find the greatest common divisor of two numbers.

// Example
// Input: 12 18  
// Output: 6  

    
#include <iostream>
using namespace std;


int gcd(int a, int b) {
    int minimum = (a < b) ? a : b;
    for (int i = minimum; i > 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }

    return 1;
}


int main() {
    int num1, num2;
    
    cout << "Enter 1st Number : ";
    cin >> num1;
    cout << "Enter 2nd Number : ";
    cin >> num2;

    int highestFact = gcd(num1, num2);

    cout << "Greatest Common Factor is : " << highestFact << endl;
    
    return 0;
}
