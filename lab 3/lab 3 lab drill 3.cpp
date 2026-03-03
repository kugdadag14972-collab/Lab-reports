#include <iostream>
using namespace std;
int main() {
 float length=0, width=0, area=1, perimeter=1;
 cout << "Enter length: ";
 cin >> length;
 cout << "Enter width: ";
 cin >> width;
 area = length * width;
 perimeter = 2*(length + width);
 cout << "Area = " << area << endl;
 cout << "Perimeter = " << perimeter;
 return 0;
}