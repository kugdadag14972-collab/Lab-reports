#include <iostream>   // Input output library include karna
using namespace std;  // Standard namespace use karna

// multiply function declare karna
// Ye function do integer parameters lega
void multiply(int num1, int num2)
{
    // Product store karne ke liye variable
    int product;

    // Dono numbers ko multiply karna
    product = num1 * num2;

    // Result display karna
    cout << "Product = " << product << endl;
}

int main()
{
    // Function ko call karna
    // 5 aur 4 arguments pass kiye gaye hain
    multiply(5, 4);

    return 0; // Program successful end
}