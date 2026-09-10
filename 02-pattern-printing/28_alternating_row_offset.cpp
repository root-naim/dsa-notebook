// Print the following Pattern

// 1 1 1 1 1
//  2 2 2 2
// 3 3 3 3 3
//  4 4 4 4
// 5 5 5 5 5

#include <iostream>
#include <string>
using namespace std;

void alternatingRowOffset(int row) {
    for (int i = 1; i <= row; i++) {
        int column = 0;
        string pattern = "";
        if (i % 2 != 0) {
            column = row;
            pattern = to_string(i) + " ";
        } else {
            column = row - 1;
            pattern = " " + to_string(i);
        }
        
        for (int j = 1; j <= column; j++) {
            cout << pattern;
        }
        
        cout << endl;
    }
}


int main() {
    int row;

    cout << "Enter row : ";
    cin >> row;

    alternatingRowOffset(row);

    return 0;
}
