#include <iostream>
 using namespace std; 
 int main()
 {
 int num;
 cout << "Enter a number please \n"; 
 cin >> num;
 int flag = 0;
 for (int i = 2; i < num; i++) 
 {
 if (num % i == 0) 
 {
 flag = 1; 
 break;
 } 
 }
 if (flag == 1) 
 {
 cout << num <<" is not a prime number \n"; 
 }
 else 
 {
 cout << num << " is a prime number \n"; }

 return 0; 
 }