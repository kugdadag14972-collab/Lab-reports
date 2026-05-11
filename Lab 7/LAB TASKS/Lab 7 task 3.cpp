#include <iostream>
using namespace std;

int main() {
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    // copy loop
    for(int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    // display source
    cout << "Source Array:\n";
    for(int i = 0; i < 5; i++) {
        cout << source[i] << " ";
    }

    cout << "\nDestination Array:\n";
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}