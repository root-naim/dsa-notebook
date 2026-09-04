// Fibonacci Series

// Problem
// Print first N Fibonacci numbers.

// Example
// Input: 8
// Output: 0 1 1 2 3 5 8 13


#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;

    if (n == 1) cout << "0 ";
    if (n >= 2) cout << "0 1 ";
    
    for (int i = 3; i <= n; i++) {
        int sum = a + b;
        a = b;
        b = sum;

        cout << sum << " ";
    }

    cout << endl;
}


int main() {
    int num;
    cout << "Enter a positive number : ";
    cin >> num;

    fibonacci(num);

    return 0;
}
