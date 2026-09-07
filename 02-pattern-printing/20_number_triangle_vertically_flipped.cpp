// Print the following Pattern

//       1
//     1 2
//   1 2 3
// 1 2 3 4

#include <iostream>
using namespace std;

void numberTriangleVerticallyFlipped (int row) {
    for (int i = 1; i <= row; i++) {
        // Space Printing 
        for (int j = 1; j < row - i + 1; j++) {
            cout << "  ";
        }

        // Star Printing
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    numberTriangleVerticallyFlipped(row);

    return 0;
}
