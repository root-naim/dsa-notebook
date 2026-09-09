// Print the following Pattern 

// 1 2 3 4 5 6 7
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1


#include <iostream>
using namespace std;

void hollowPalindromicNumberPyramid(int row) {
    for (int i = 0; i < row; i++) {
        int pattern = 1;
        // Print Left Numbers
        for (int j = 1; j <= row - i; j++) {
            cout << pattern++ << " ";
        }

        // Print Spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "  ";
            pattern++;
        }

        // Print Right Numbers 
        int maxRow = 2 * row - 1;
        for (int j = pattern; j <= maxRow; j++) {
            cout << maxRow - pattern + 1 << " ";
            pattern++;
        }

        cout << endl;
    }
}


int main() {
    int row;
    cout << "Enter row : ";
    cin >> row;

    hollowPalindromicNumberPyramid(row);

    return 0;
}
