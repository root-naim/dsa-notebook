// Print the following Pattern 

// 1 2 3 4 5 6 7
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7


#include <iostream>
using namespace std;

void hollowNumberPyramid(int row) {
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
        for (int j = pattern; j <= 2 * row - 1; j++) {
            cout << pattern++ << " ";
        }

        cout << endl;
    }
}


int main() {
    int row;
    cout << "Enter row : ";
    cin >> row;

    hollowNumberPyramid(row);

    return 0;
}
