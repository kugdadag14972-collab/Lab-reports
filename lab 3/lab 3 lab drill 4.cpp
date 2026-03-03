#include <iostream>
using namespace std;
int main() {
 float r1=0, r2=0, netResistance=0;
 cout << "Enter Resistance 1: ";
 cin >> r1;
 cout << "Enter Resistance 2: ";
 cin >> r2;
 netResistance = (r1*r2)/(r1+r2);
 cout << "Net Resistance = " << netResistance;
 return 0;
}