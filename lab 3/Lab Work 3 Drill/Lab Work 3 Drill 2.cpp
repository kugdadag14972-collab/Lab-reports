#include <iostream>
using namespace std;

int main()
{
    float u = 0;   // initial velocity
    float v = 0;   // final velocity
    float a = 0;   // acceleration
    float t = 0;   // time

    cout<<"Enter initial velocity: ";
    cin>>u;

    cout<<"Enter acceleration: ";
    cin>>a;

    cout<<"Enter time: ";
    cin>>t;

    v = u + a*t;   // equation of motion

    cout<<"Initial Velocity = "<<u<<endl;
    cout<<"Acceleration = "<<a<<endl;
    cout<<"Time = "<<t<<endl;
    cout<<"Final Velocity = "<<v<<endl;

    return 0;
}