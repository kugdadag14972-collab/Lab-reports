#include <iostream>
using namespace std;
int main() {
 float radius=0, circumference=1;
 const float pi=3.14;
 cout << "Enter radius: ";
 cin >> radius;
 circumference = 2*pi*radius;
 cout << "Radius = " << radius << endl;
 cout << "Circumference = " << circumference;
 return 0;
}