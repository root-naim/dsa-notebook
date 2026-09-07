// Print the following Pattern

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include <iostream>
using namespace std;

void numberSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }

        cout << endl;
    }
}


int main() {
    int side;

    cout << "Enter side length : ";
    cin >> side;


    numberSquare(side);

    return 0;
}
