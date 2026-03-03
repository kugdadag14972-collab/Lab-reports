#include <iostream>
using namespace std;
int main() {
 float Ra=0, Rb=0, Rc=0;
 float Rab, Rbc, Rca;
 cout << "Enter Star Resistances Ra Rb Rc: ";
 cin >> Ra >> Rb >> Rc;
 Rab = (Ra*Rb + Rb*Rc + Rc*Ra)/Rc;
 Rbc = (Ra*Rb + Rb*Rc + Rc*Ra)/Ra;
 Rca = (Ra*Rb + Rb*Rc + Rc*Ra)/Rb;
 cout << "Delta Resistance Rab = " << Rab << endl;
 cout << "Delta Resistance Rbc = " << Rbc << endl;
 cout << "Delta Resistance Rca = " << Rca;
 return 0;
}