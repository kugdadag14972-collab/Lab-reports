#include <iostream>   // input/output ke liye library include kar rahe hain
using namespace std;  // standard namespace use kar rahe hain

int main() {
    
    int i = 1;  // variable i ko 1 se initialize kiya (start point)

    while (i <= 10) {   // jab tak i 10 se chota ya barabar hai, loop chalega
        
        cout << i << endl;  // current value of i print karega aur next line par chala jayega
        
        i++;  // i ki value 1 se increase karega (increment)
    }

    return 0;  // program successfully end hone ka signal
}