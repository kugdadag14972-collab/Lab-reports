#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {
        {5, 8, 2, 1},
        {9, 3, 7, 6},
        {4, 12, 10, 11},
        {15, 14, 13, 0}
    };

    int max = matrix[0][0];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    cout << "Maximum Value = " << max << endl;

    return 0;
}