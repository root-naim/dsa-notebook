// Print the following pattern 

// * * * * * * * * * * * * * * *
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// * * * * * * * * * * * * * * *
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// * * * * * * * * * * * * * * *

#include <iostream>
#include <algorithm>
using namespace std;

void insideSquareBoundary(int row) {
    int mid = static_cast<int>(row / 2) + 1;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
            if (i == 1 || i == row || i == mid) {
                cout << "* ";
            } else if (j == 1 || j == mid || j == row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

int main() {
    int row;
    cout << "Enter row : ";
    cin >> row;

    insideSquareBoundary(row);

    return 0;
}
