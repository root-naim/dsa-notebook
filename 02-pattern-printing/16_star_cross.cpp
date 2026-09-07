// Print the following Pattern 

// *       *
//   *   *
//     *
//   *   *
// *       *



#include <iostream>
using namespace std;

void starCross(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || i + j == n + 1) cout << "* ";
            else cout << "  ";
        }

        cout << endl;
    }
}


int main() {
    int size;
    cout << "Enter size length : ";
    cin >> size;

    starCross(size);

    return 0;
}
