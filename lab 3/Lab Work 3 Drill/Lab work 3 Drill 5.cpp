#include <iostream>
using namespace std;

int main()
{
    float length=0, width=0;    // length aur width
    float area=1, perimeter=1;  // area aur perimeter

    cout<<"Enter length: ";
    cin>>length;

    cout<<"Enter width: ";
    cin>>width;

    area = length * width;                 // area formula
    perimeter = 2*(length + width);        // perimeter formula

    cout<<"Area = "<<area<<endl;
    cout<<"Perimeter = "<<perimeter<<endl;

    return 0;
}