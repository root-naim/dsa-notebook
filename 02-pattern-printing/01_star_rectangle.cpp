// Print the following Pattern

// * * * * *
// * * * * *
// * * * * *

#include <iostream>
using namespace std;

void starRectangle(int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "* ";
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

    starRectangle(row, column);

    return 0;
}
