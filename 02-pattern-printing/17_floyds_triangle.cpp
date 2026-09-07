// Print the following Pattern

// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

void floydsTriangle(int row) {
    int pattern = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            cout << pattern++ << " ";
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    floydsTriangle(row);

    return 0;
}
