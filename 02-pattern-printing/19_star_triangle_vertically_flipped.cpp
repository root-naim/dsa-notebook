// Print the following Pattern

//       *
//     * *
//   * * *
// * * * *

#include <iostream>
using namespace std;

void starTriangleVerticallyFlipped (int row) {
    for (int i = 1; i <= row; i++) {
        // Space Printing 
        for (int j = 1; j < row - i + 1; j++) {
            cout << "  ";
        }

        // Star Printing
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    starTriangleVerticallyFlipped(row);

    return 0;
}
