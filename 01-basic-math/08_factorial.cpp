// Factorial

// Problem
// Find the factorial of a number `N`.

// Example
// Input: 5  
// Output: 120  


#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1; // 0! = 1, 1! = 1

    for (int i = 2; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;
    cout << "Enter a positive number : ";
    cin >> num;

    int fact = factorial(num);

    cout << num << "! = " << fact << endl;

    return 0;
}
