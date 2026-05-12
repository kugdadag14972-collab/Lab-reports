#include <iostream>          // Input/Output ke liye
using namespace std;         // Standard namespace use karne ke liye

int main()
{
    int num = 25;            // Integer variable declare aur initialize kiya

    int *ptr;                // Integer pointer declare kiya

    ptr = &num;              // Pointer ko num ke address par point karwaya

    cout << "Value of num: " << num << endl;      // num ki original value display
    cout << "Value using ptr: " << *ptr << endl;  // Dereference karke value display

    return 0;                // Program successful end
}
