// Print the following Pattern

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include <iostream>
using namespace std;

void starSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}


int main() {
    int side;

    cout << "Enter side : ";
    cin >> side;


    starSquare(side);

    return 0;
}
