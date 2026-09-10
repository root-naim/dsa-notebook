// Print the following Pattern

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <iostream>
using namespace std;

void inscribedHollowDiamond(int row) {
    int totalRows = 2 * row;

    for (int i = 1; i <= totalRows; i++) {

        // First and last row
        if (i == 1 || i == totalRows) {
            for (int j = 1; j <= totalRows; j++) {
                cout << "*";
            }

            cout << endl;
            continue;
        }

        int numOfStar;
        int numOfSpace;

        // Upper & Lower Half
        if (i <= row) {
            numOfStar = row - i + 1;
            numOfSpace = 2 * (i - 1);
        } else { 
            numOfStar = i - row;
            numOfSpace = 2 * (totalRows - i);
        }

        // Print stars before spaces
        for (int j = 1; j <= numOfStar; j++) {
            cout << "*";
        }

        // Print spaces
        for (int j = 1; j <= numOfSpace; j++) {
            cout << " ";
        }

        // Print stars after spaces
        for (int j = 1; j <= numOfStar; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int row;

    cout << "Enter row: ";
    cin >> row;

    inscribedHollowDiamond(row);

    return 0;
}
