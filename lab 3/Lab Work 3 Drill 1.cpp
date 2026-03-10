#include <iostream>     // input output library
using namespace std;    // standard namespace

int main()
{
    float voltage = 0;     // voltage variable initialize
    float current = 0;     // current variable initialize
    float resistance = 0;  // resistance variable initialize

    cout<<"Enter voltage: ";   // user se voltage lena
    cin>>voltage;

    cout<<"Enter current: ";   // user se current lena
    cin>>current;

    resistance = voltage / current;   // ohm law formula

    cout<<"Voltage = "<<voltage<<endl;      // voltage display
    cout<<"Current = "<<current<<endl;      // current display
    cout<<"Resistance = "<<resistance<<endl; // resistance display

    return 0;   // program end
}