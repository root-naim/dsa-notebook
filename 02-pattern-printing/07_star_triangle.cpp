// Print the following Pattern

// *
// * *
// * * *
// * * * *
// * * * * *

#include <iostream>
using namespace std;

void starTriangle(int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}


int main() {
    int row, column;

    cout << "Enter row : ";
    cin >> row;

    starTriangle(row);

    return 0;
}
