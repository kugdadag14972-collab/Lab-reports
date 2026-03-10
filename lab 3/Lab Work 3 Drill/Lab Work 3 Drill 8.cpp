#include <iostream>
#include <cmath>   // sqrt function ke liye
using namespace std;

int main()
{
    float base, perpendicular, hypotenuse;

    cout<<"Enter base: ";
    cin>>base;

    cout<<"Enter perpendicular: ";
    cin>>perpendicular;

    hypotenuse = sqrt(base*base + perpendicular*perpendicular);

    cout<<"Hypotenuse = "<<hypotenuse<<endl;

    return 0;
}