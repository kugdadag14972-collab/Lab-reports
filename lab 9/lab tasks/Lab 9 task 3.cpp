#include <iostream>   // Input output library include karna
using namespace std;  // Standard namespace use karna

// Function declaration
// Ye function array aur uska size receive karega
int calculateSum(int arr[], int size)
{
    int sum = 0; // Sum store karne ke liye variable

    // Loop array ke tamam elements ko add karega
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    // Final sum return karna
    return sum;
}

int main()
{
    int arr[10]; // 10 integers store karne ke liye array
    int sum;     // Sum store karne ke liye variable
    float average; // Average store karne ke liye variable

    // User se array input lena
    cout << "Enter 10 integer values:" << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Function call karke sum lena
    sum = calculateSum(arr, 10);

    // Average calculate karna
    average = sum / 10.0;

    // Sum display karna
    cout << "\nSum of array elements = " << sum << endl;

    // Average display karna
    cout << "Average of array elements = " << average << endl;

    return 0; // Program successful end
}