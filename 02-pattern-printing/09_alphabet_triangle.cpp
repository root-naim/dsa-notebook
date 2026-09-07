// Print the following Pattern

// A
// A B
// A B C
// A B C D
// A B C D E

#include <iostream>
using namespace std;

void alphabetTriangle(int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            cout << static_cast<char>(65 + j) << " ";
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    alphabetTriangle(row);

    return 0;
}
