#include <iostream>
using namespace std;
int main() {
 int a = 10;
 float b = 5.5;
 char c = 'K';
 double d = 12.345;
 cout << "Integer Value: " << a << endl;
 cout << "Size of int: " << sizeof(a) << " bytes" << endl;
 cout << "Address of int: " << &a << endl << endl;
 cout << "Float Value: " << b << endl;
 cout << "Size of float: " << sizeof(b) << " bytes" << endl;
 cout << "Address of float: " << &b << endl << endl;
 cout << "Char Value: " << c << endl;
 cout << "Size of char: " << sizeof(c) << " bytes" << endl;
 cout << "Address of char: " << &c << endl << endl;
 cout << "Double Value: " << d << endl;
 cout << "Size of double: " << sizeof(d) << " bytes" << endl;
 cout << "Address of double: " << &d << endl;
 return 0;
}