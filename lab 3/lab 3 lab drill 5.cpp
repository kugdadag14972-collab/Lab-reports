#include <iostream>
using namespace std;
int main() {
 float r1=0, r2=0, totalCurrent=0, I1=0, I2=0;
 cout << "Enter Resistance 1: ";
 cin >> r1;
 cout << "Enter Resistance 2: ";
 cin >> r2;
 cout << "Enter Total Current: ";
 cin >> totalCurrent;
 I1 = (r2/(r1+r2))*totalCurrent;
 I2 = (r1/(r1+r2))*totalCurrent;
 cout << "Branch Current I1 = " << I1 << endl;
 cout << "Branch Current I2 = " << I2;
 return 0;
}