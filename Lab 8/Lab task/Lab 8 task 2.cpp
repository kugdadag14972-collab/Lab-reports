#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0;

    // Row sum
    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i+1 << " Sum = " << rowSum << endl;
        totalSum += rowSum;
    }

    // Column sum
    for(int j = 0; j < 3; j++) {
        int colSum = 0;
        for(int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j+1 << " Sum = " << colSum << endl;
    }

    cout << "Total Sum = " << totalSum << endl;

    return 0;
}