#include <iostream>
using namespace std;

int main()
{
    float s1=0, s2=0, s3=0, s4=0, s5=0;   // subjects marks
    float average = 0;                    // average variable

    cout<<"Enter marks of subject 1: ";
    cin>>s1;

    cout<<"Enter marks of subject 2: ";
    cin>>s2;

    cout<<"Enter marks of subject 3: ";
    cin>>s3;

    cout<<"Enter marks of subject 4: ";
    cin>>s4;

    cout<<"Enter marks of subject 5: ";
    cin>>s5;

    average = (s1+s2+s3+s4+s5)/5;   // average formula

    cout<<"Average marks = "<<average<<endl;

    return 0;
}