// Common Factors 

// Problem
// Print all the common factors of a given number

// Example
// Input: 16
// Output: 1 2 4 8 16

#include <iostream>
#include <cmath>
using namespace std;

void commonFactor(int n) {
    cout << "Common factors : ";
    
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) cout << i << " ";
            else cout << i << " " << (n / i) << " ";
        }
    }

    cout << endl;
}

void commonFactorInOrder(int n) {
    cout << "Common factors : ";

    // Common factors before √n
    for (int i = 1; i < sqrt(n); i++) {
        if (n % i == 0) cout << i << " ";
    }

    // Common factors after √n
    for (int i = static_cast<int>(sqrt(n)); i > 0; i--) {
        if (n % i == 0) cout << (n / i) << " ";
    }

    cout << endl;
}


int main() {
    int num;
    cout << "Enter a positive number : ";
    cin >> num;

    commonFactor(num);
    commonFactorInOrder(num);

    return 0;
}
