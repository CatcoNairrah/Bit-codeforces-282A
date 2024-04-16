#include <iostream>
#include <cstdlib> // for abs function

using namespace std;

int main() {
    // Reading the matrix from input
    int matrix[5][5];
    int row_idx = -1, col_idx = -1;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row_idx = i + 1;
                col_idx = j + 1;
            }
        }
    }

    // Calculate the Manhattan distance to the center
    int moves = abs(3 - row_idx) + abs(3 - col_idx);

    // Print the minimum number of moves
    cout << moves << endl;

    return 0;
}
