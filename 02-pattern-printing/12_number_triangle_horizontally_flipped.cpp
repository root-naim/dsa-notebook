// Print the following Pattern

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

void numberTriangleHorizontallyFlipped(int n) {
    for (int i = 0; i < n; i++) {
        int pattern = 1;
        for (int j = n - i; j >= 1; j--) {
            cout << pattern << " ";
            pattern++;
        }

        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;


    numberTriangleHorizontallyFlipped(row);

    return 0;
}
