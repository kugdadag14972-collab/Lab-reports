#include <iostream>          // Input/Output ke liye
using namespace std;         // Standard namespace use karne ke liye

int main()
{
    // Integer array declare aur initialize kiya
    int numbers[5] = {10, 20, 30, 40, 50};

    // Pointer declare kiya aur array ke pehle element par point karwaya
    int *ptr = numbers;

    // Loop ke through pointer arithmetic se array ke elements display
    for (int i = 0; i < 5; i++)
    {
        // *(ptr + i) se i-th element ki value milti hai
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    return 0;                // Program successful end
}