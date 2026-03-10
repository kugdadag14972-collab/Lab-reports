#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    float root1, root2;

    cout<<"Enter value of a: ";
    cin>>a;

    cout<<"Enter value of b: ";
    cin>>b;

    cout<<"Enter value of c: ";
    cin>>c;

    root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);   // first root
    root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);   // second root

    cout<<"Root 1 = "<<root1<<endl;
    cout<<"Root 2 = "<<root2<<endl;

    return 0;
}