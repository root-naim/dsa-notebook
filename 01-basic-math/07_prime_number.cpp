
// Prime Number

// Problem
// Check whether a number is prime or not.

// Example
// Input: 7  
// Output: Prime Number  


#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNumber(int n) {
    if (n == 1) return false;
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int num;
    cout << "Enter a positive number : ";
    cin >> num;

    if (num == 1) {
        cout << num << " is neither composite nor prime number" << endl;
    } else if (isPrimeNumber(num)) {
        cout << num << " is a prime number" << endl;
    } else {
        cout << num << " is a composite number" << endl;
    }
    
    return 0;
}
