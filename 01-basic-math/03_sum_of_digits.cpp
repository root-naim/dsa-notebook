// Sum of Digits

// Problem
// Given a number `N`, calculate the sum of all digits.

// Example:
// `1234` → `1 + 2 + 3 + 4 = 10`
// `-1234` → `-(1 + 2 + 3 + 4) = -10`

#include <iostream>

using namespace std;

int digitSum(int n) {
    int sum = 0;

    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int sum = digitSum(num);

    cout << "Sum of digits is : " << sum << endl;

    return 0;
}
