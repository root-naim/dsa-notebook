// Print the following Pattern 

//     *
//     *
// * * * * *
//     *
//     *


#include <iostream>
using namespace std;

void starPlus(int n) {
    int mid = static_cast<int>(n / 2) + 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == mid || j == mid) cout << "* ";
            else cout << "  ";
        }

        cout << endl;
    }
}


int main() {
    int size;
    cout << "Enter size length : ";
    cin >> size;

    starPlus(size);

    return 0;
}
