// Print the following Pattern

// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include <iostream>
using namespace std;

void alphanumericTriangle(int row) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0) cout << static_cast<char>(64 + j) << " ";
            else cout << j << " ";
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    alphanumericTriangle(row);

    return 0;
}
