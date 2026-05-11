#include <iostream>   // Input output library include karna
using namespace std;  // Standard namespace use karna

// getSquare function declare karna
// Ye function ek integer parameter lega
int getSquare(int number)
{
    // Square calculate karna
    int square = number * number;

    // Result return karna
    return square;
}

int main()
{
    // Result store karne ke liye variable
    int result;

    // Function call karna aur value receive karna
    result = getSquare(6);

    // Square display karna
    cout << "Square = " << result << endl;

    return 0; // Program successful end
}