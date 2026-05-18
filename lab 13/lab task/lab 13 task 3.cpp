// ===============================================
// Task 3: Accessing Structure Elements
// Book Structure Program
// ===============================================

#include <iostream>   // For input and output
#include <string>     // For string data type
using namespace std;  // To use cout and string directly

// Define a structure named Book
struct Book
{
    string title;    // Member to store book title
    string author;   // Member to store author name
    float price;     // Member to store book price
    int pages;       // Member to store number of pages
};

int main()
{
    // Declare first variable of type Book
    Book book1;

    // Initialize members of book1
    book1.title = "C++ Programming";
    book1.author = "Bjarne Stroustrup";
    book1.price = 1500.50;
    book1.pages = 1200;

    // Declare second variable of type Book
    Book book2;

    // Initialize members of book2
    book2.title = "Data Structures";
    book2.author = "Mark Allen Weiss";
    book2.price = 950.75;
    book2.pages = 650;

    // Display book1 information
    cout << "Book 1 Information" << endl;
    cout << "Title  : " << book1.title << endl;
    cout << "Author : " << book1.author << endl;
    cout << "Price  : " << book1.price << endl;
    cout << "Pages  : " << book1.pages << endl;
    cout << endl;

    // Display book2 information
    cout << "Book 2 Information" << endl;
    cout << "Title  : " << book2.title << endl;
    cout << "Author : " << book2.author << endl;
    cout << "Price  : " << book2.price << endl;
    cout << "Pages  : " << book2.pages << endl;

    return 0;   // End of program
}