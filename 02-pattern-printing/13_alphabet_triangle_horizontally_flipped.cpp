// Print the following Pattern

// a b c d e
// a b c d
// a b c
// a b
// a

#include <iostream>
using namespace std;

void alphabetTriangleHorizontallyFlipped(int n) {
    for (int i = 0; i < n; i++) {
        char pattern = 'a';
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


    alphabetTriangleHorizontallyFlipped(row);

    return 0;
}
