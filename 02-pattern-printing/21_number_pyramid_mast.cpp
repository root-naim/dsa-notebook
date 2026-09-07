// Print the following Pattern

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;

void numberPyramidMast (int row) {
    for (int i = 1; i <= row; i++) {
        // Print spaces
        for (int j = 1; j < row - i + 1; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers 
        for (int j = i - 1; j > 0; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    numberPyramidMast(row);

    return 0;
}
