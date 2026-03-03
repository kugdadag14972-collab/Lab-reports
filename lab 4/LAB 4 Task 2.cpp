#include <iostream> // Input-output library
using namespace std; // Standard namespace
int main()
{
char grade; // Variable to store grade
cout << "Enter your grade (A, B, C, D, F): "; // Prompt user
cin >> grade; // Take input
switch(grade) // Switch on character
{
case 'A':
cout << "Excellent" << endl;
break;
case 'B':
cout << "Very Good" << endl;
break;
case 'C':
cout << "Good" << endl;
break;
case 'D':
cout << "Pass" << endl;
break;
case 'F':
cout << "Fail" << endl;
break;
default:
cout << "Invalid Grade" << endl; // Invalid input
}
return 0; // End program
}