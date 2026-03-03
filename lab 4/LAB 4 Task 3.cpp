#include <iostream> // Input-output library
using namespace std; // Standard namespace
int main()
{
int choice; // Variable for menu selection
float value, result; // Variables for input and result
// Display menu
cout << "1 ? Kilometers to Meters" << endl;
cout << "2 ? Meters to Centimeters" << endl;
cout << "3 ? Kilograms to Grams" << endl;
cout << "4 ? Celsius to Fahrenheit" << endl;
cout << "Enter your choice: ";
cin >> choice; // Take user choice
cout << "Enter value: ";
cin >> value; // Take input value
switch(choice) // Switch based on user choice
{
case 1:
result = value * 1000; // km to m
cout << "Result: " << result << " meters" << endl;
break;
case 2:
result = value * 100; // m to cm
cout << "Result: " << result << " cm" << endl;
break;
case 3:
result = value * 1000; // kg to g
cout << "Result: " << result << " grams" << endl;
break;
case 4:
result = (value * 9/5) + 32; // Celsius to Fahrenheit
cout << "Result: " << result << " F" << endl;
break;
default:
cout << "Invalid choice!" << endl; // Wrong option
}
return 0; // End program
}