// Print the following Pattern

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

void numberTriangle(int row) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    numberTriangle(row);

    return 0;
}
