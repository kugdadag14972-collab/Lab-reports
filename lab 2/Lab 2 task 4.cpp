#include <iostream>
using namespace std;

int main() {
    // Use 'double' for better precision than 'float'
    double celsius, fahrenheit;

    cout << "--- Temperature Converter ---" << endl;
    cout << "Enter temperature in Celsius: ";
    
    // Taking input
    if (!(cin >> celsius)) {
        cout << "Error: Please enter a valid number." << endl;
        return 1; 
    }

    // Calculation using 9.0/5.0 to avoid integer division error
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Displaying output
    cout << celsius << " C is equal to " << fahrenheit << " F" << endl;

    return 0;
}