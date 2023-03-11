/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab5A
Wrote a program that defines a function bool isDivisibleBy(int n, int d);
If n is divisible by d, the function should return true, otherwise return false.
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){

  if(d==0)return false;

  if(n%d==0)
{
  return true;
}
else
{
  return false;
}
}

int main(){

int num;
int div;

cout << "Enter the value of dividend: " << endl;
cin >> num;

cout << "Enter the value of divisor: " << endl;
cin >> div;

bool ans = isDivisibleBy(num,div);

if(ans)
{
  cout<<"YES";
}
else
{
  cout<<"NO";
}
return 0;
}
