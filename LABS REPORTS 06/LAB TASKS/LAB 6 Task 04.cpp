#include <iostream>   // input/output ke liye
using namespace std;

int main() {

    int rows;   // rows ka number store karne ke liye

    cout << "Enter number of rows: ";
    cin >> rows;   // user se rows lena

    // outer loop rows control karega
    for(int i = 1; i <= rows; i++) {

        // inner loop stars print karega
        for(int j = 1; j <= i; j++) {

            cout << "* ";   // star print karna
        }

        cout << endl;   // next line me jana
    }

    return 0;   // program end
}