// Print the following Pattern

// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e

#include <iostream>
using namespace std;

void alphabetSquareV2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << static_cast<char>(96 + i) << " ";
        }

        cout << endl;
    }
}


int main() {
    int side;

    cout << "Enter side length : ";
    cin >> side;


    alphabetSquareV2(side);

    return 0;
}
