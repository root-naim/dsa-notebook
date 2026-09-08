// Print the following Pattern 

//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *


#include <iostream>
using namespace std;


void hollowDiamond(int row) {
    // First Half 
    for (int i = 1; i <= row; i++) {
        // Print First Spaces 
        for (int j = 1; j <= row - i; j++) {
            cout << " ";
        }

        // Print Stars and Spaces 
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) cout << "*";
            else cout << " ";
        }

        cout << endl;
    }

    // Second Half 
    for (int i = 1; i < row; i++) {
        // Print First Spaces
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }

        // Print Stars and Spaces
        for (int j = 1; j <= 2 * (row - i) - 1; j++) {
            if (j == 1 || j == 2 * (row - i) - 1) cout << "*";
            else cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int row;
    cout << "Enter row : ";
    cin >> row;

    hollowDiamond(row);

    return 0;
}
