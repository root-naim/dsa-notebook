// LCM

// Problem
// Find the least common multiple of two numbers.

// Example
// Input: 4 6  
// Output: 12  


#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int minimum = (a < b) ? a : b;
    int multiple = a * b;

    for (int i = minimum; i < multiple; i++) {
        if (i % a == 0 && i % b == 0) return i;
    }

    return multiple;
}


int main() {
    int num1, num2;

    cout << "Enter 1st Number : ";
    cin >> num1;
    cout << "Enter 2nd Number : ";
    cin >> num2;

    int leastCommonMultiple = lcm(num1, num2);
    cout << "Least common multiple is : " << leastCommonMultiple << endl;
    
    return 0;
}
