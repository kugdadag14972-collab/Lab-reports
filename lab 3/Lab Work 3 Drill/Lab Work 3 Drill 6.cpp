#include <iostream>
using namespace std;

int main()
{
    float r1=0, r2=0;   // resistors
    float netR=0;       // net resistance

    cout<<"Enter resistor 1: ";
    cin>>r1;

    cout<<"Enter resistor 2: ";
    cin>>r2;

    netR = (r1*r2)/(r1+r2);   // parallel resistance formula

    cout<<"Resistor 1 = "<<r1<<endl;
    cout<<"Resistor 2 = "<<r2<<endl;
    cout<<"Net Resistance = "<<netR<<endl;

    return 0;
}