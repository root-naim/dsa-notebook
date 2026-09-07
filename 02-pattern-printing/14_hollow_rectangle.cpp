// Print the following Pattern

// * * * * * * *
// *           *
// *           *
// *           *
// * * * * * * *


#include <iostream>
using namespace std;

void hollowRectangle(int row, int column) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            if (i == 1 || i == row || j == 1 || j == column) cout << "* ";
            else cout << "  ";
        }

        cout << endl;
    }
}


int main() {
    int row, column;

    cout << "Enter row : ";
    cin >> row;
    cout << "Enter column : ";
    cin >> column;

    hollowRectangle(row, column);

    return 0;
}
