// Print the following Pattern

// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include <iostream>
using namespace std;

void alphabetSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << static_cast<char>(64 + j) << " ";
        }

        cout << endl;
    }
}


int main() {
    int side;

    cout << "Enter side length : ";
    cin >> side;


    alphabetSquare(side);

    return 0;
}
