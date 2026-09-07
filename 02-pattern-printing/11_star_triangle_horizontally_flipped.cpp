// Print the following Pattern

// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

void starTriangleHorizontallyFilpped(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j >= 1; j--) {
            cout << "* ";
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;


    starTriangleHorizontallyFilpped(row);

    return 0;
}
