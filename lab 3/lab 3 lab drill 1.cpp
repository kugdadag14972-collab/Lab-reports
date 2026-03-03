#include <iostream>
using namespace std;
int main() {
 float m1=0, m2=0, m3=0, m4=0, m5=0, average=0;
 cout << "Enter marks of five subjects: ";
 cin >> m1 >> m2 >> m3 >> m4 >> m5;
 average = (m1+m2+m3+m4+m5)/5;
 cout << "Average Marks = " << average;
 return 0;
}