#include <iostream>     // input output library
using namespace std;

int main()
{
    int number;   // integer variable declare

    cout<<"Enter an integer: ";   // user ko number enter karne ka message
    cin>>number;                  // user ka input lena

    if(number >= 0)               // condition check
    {
        cout<<"You entered a positive integer: "<<number<<endl;
        // agar number zero ya positive ho
    }
    else
    {
        cout<<"You entered a negative integer: "<<number<<endl;
        // agar number negative ho
    }

    return 0;   // program end
}