// Print the following pattern 

// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include <iostream>
#include <algorithm>
using namespace std;

void concentricNumberSquare(int row) {
    for (int i = 1; i <= 2 * row - 1; i++) {
        for (int j = 1; j <= 2 * row - 1; j++) {
            int a = i, b = j;
            if (i > row) a = 2 * row - i;
            if (j > row) b = 2 * row - j;

            cout << row - min(a, b) + 1 << " ";
        }

        cout << endl;
    }
}

int main() {
    int row;
    cout << "Enter row : ";
    cin >> row;

    concentricNumberSquare(row);

    return 0;
}
