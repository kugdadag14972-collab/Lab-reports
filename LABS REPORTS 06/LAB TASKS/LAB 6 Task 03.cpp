#include <iostream>   // input/output ke liye
using namespace std;

int main() {

    int num;   // user se number lene ke liye variable
    int sum = 0;   // sum store karne ke liye (initially 0)

    cout << "Enter a positive integer: ";
    cin >> num;   // user se input lena

    // for loop 1 se num tak chalega
    for(int i = 1; i <= num; i++) {

        sum = sum + i;   // har number ko sum me add karna
    }

    cout << "Sum = " << sum;   // final result display

    return 0;   // program end
}