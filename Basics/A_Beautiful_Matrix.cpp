#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int oneRow, oneCol;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                oneRow = i + 1; 
                oneCol = j + 1; 
            }
        }
    }

    int targetRow = 3;
    int targetCol = 3;

    int moves = abs(oneRow - targetRow) + abs(oneCol - targetCol);

    cout << moves << endl;

    return 0;
}
