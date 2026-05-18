// ===============================================
// Task 1: Structure Declaration and Initialization
// Person Structure Program
// ===============================================

#include <iostream>   // For input and output
#include <string>     // For string data type
using namespace std;  // To use cout and string directly

// Define a structure named Person
struct Person
{
    string name;      // Member to store name
    int age;          // Member to store age
    string address;   // Member to store address
};

int main()
{
    // Declare a variable of type Person
    Person person1;

    // Initialize structure members using dot notation
    person1.name = "Khalid Khan";
    person1.age = 20;
    person1.address = "Rawalpindi, Pakistan";

    // Display the values of structure members
    cout << "Person Information" << endl;
    cout << "Name    : " << person1.name << endl;
    cout << "Age     : " << person1.age << endl;
    cout << "Address : " << person1.address << endl;

    return 0;   // End of program
}