#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // loop se display
    for(int i = 0; i < 5; i++) {
        cout << "Value at index " << i << " = " << numbers[i] << endl;
    }

    return 0;
}
