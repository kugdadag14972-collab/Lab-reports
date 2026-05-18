// ===============================================
// Task 2: Structure Declaration and Initialization
// Student Structure Program
// ===============================================

#include <iostream>   // For input and output
#include <string>     // For string data type
using namespace std;  // To use cout and string directly

// Define a structure named Student
struct Student
{
    string name;   // Member to store student's name
    int age;       // Member to store student's age
    char grade;    // Member to store student's grade
};

int main()
{
    // Declare a variable of type Student
    Student student1;

    // Initialize structure members using dot notation
    student1.name = "Ali Ahmed";
    student1.age = 19;
    student1.grade = 'A';

    // Display the values of structure members
    cout << "Student Information" << endl;
    cout << "Name  : " << student1.name << endl;
    cout << "Age   : " << student1.age << endl;
    cout << "Grade : " << student1.grade << endl;

    return 0;   // End of program
}