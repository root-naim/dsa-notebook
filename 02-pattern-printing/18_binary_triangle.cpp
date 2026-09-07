// Print the following Pattern

// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include <iostream>
using namespace std;

void binaryTriangle(int row) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) cout << "1 ";
            else cout << "0 ";
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    binaryTriangle(row);

    return 0;
}
