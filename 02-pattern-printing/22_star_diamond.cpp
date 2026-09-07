// Print the following Pattern

//       *
//     * * *
//   * * * * *
//     * * *
//       *

#include <iostream>
using namespace std;

void starDiamond (int row) {
    int mid = static_cast<int>(row / 2) + 1;
    int numOfStar = 1;
    int numOfSpace = mid - 1;
    
    for (int i = 1; i <= row; i++) {
        // Print spaces
        for (int j = 1; j <= numOfSpace; j++) {
            cout << "  ";
        }

        // Print stars
        for (int j = 1; j <= numOfStar; j++) {
            cout << "* ";
        }

        if (i < mid) {
            numOfSpace--;
            numOfStar += 2;
        } else {
            numOfSpace++;
            numOfStar -= 2;
        }
        
        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    starDiamond(row);

    return 0;
}
