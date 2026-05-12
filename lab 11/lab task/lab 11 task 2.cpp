#include <iostream>
#include <string>
using namespace std;

int main()
{
    // First name aur last name
    string firstName = "Khalid";
    string lastName = "Khan";

    // Dono strings ko join karna
    string fullName = firstName + " " + lastName;

    // Full name display karna
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Full Name: " << fullName << endl;

    return 0;
}