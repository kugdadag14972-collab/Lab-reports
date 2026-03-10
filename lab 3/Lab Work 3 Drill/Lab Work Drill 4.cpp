#include <iostream>
using namespace std;

int main()
{
    float radius = 0;           // radius variable
    float circumference = 1;    // circumference variable

    cout<<"Enter radius: ";
    cin>>radius;

    circumference = 2 * 3.1416 * radius;   // circumference formula

    cout<<"Radius = "<<radius<<endl;
    cout<<"Circumference = "<<circumference<<endl;

    return 0;
}