// C++ program do numbers add karne ke liye function use kar ke

#include <iostream>      // input output library
using namespace std;     // standard namespace

int addTwo(int x, int y);   // function prototype

int main()
{
    int a, b, sum;   // variables declare

    cout << "Enter the first number: ";   // user se pehla number
    cin >> a;

    cout << "Enter the second number: ";  // user se doosra number
    cin >> b;

    sum = addTwo(a, b);   // function call

    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    // result print

    return 0;   // program end
}

int addTwo(int x, int y)   // function definition
{
    return (x + y);        // dono numbers add kar ke return
}