#include <iostream>   // input/output ke liye
using namespace std;

int main() {

    // outer loop rows ke liye (1 se 10 tak)
    for(int i = 1; i <= 10; i++) {

        // inner loop columns ke liye (1 se 10 tak)
        for(int j = 1; j <= 10; j++) {

            // i * j ka result print karna (formatted)
            cout << i * j << "\t";   // \t se spacing ayegi table jaisi
        }

        cout << endl;  // har row ke baad next line
    }

    return 0;  // program end
}