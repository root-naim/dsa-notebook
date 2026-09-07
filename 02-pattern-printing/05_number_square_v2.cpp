// Print the following Pattern

// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

#include <iostream>
using namespace std;

void numberSquareV2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " ";
        }

        cout << endl;
    }
}


int main() {
    int side;

    cout << "Enter side length : ";
    cin >> side;


    numberSquareV2(side);

    return 0;
}
