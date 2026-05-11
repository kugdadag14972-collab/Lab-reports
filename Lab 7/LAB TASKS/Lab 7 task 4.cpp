#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    // input
    for(int i = 0; i < 5; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> numbers[i];
    }

    // sum calculate
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    cout << "Total Sum = " << sum << endl;

    return 0;
}