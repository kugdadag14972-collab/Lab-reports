#include <iostream> // Input-output library
using namespace std; // Standard namespace
int main()
{
int day; // Variable to store day number
cout << "Enter day number (1-7): "; // Prompt user
cin >> day; // Take input
switch(day) // Switch statement to check day
{
case 1:
cout << "Monday" << endl; // If input is 1
break; // Stop execution
case 2:
cout << "Tuesday" << endl;
break;
case 3:
cout << "Wednesday" << endl;
break;
case 4:
cout << "Thursday" << endl;
break;
case 5:
cout << "Friday" << endl;
break;
case 6:
cout << "Saturday" << endl;
break;
case 7:
cout << "Sunday" << endl;
break;
default:
cout << "Invalid input!" << endl; // If input is not 1–7
}
return 0; // End program
}