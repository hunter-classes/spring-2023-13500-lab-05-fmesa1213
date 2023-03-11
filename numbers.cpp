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

bool isPrime(int n);{
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Next prime = %d", nextPrime(n));    
}
int nextPrime(int n);{
int flag;
    for(int i = (n + 1); ; i++)
{
  flag = 0;
  for(int j = 2; j < (i)/2; j++)
{
  if((i % j) == 0)
{
  flag = 1;   
  break;      
  }
  }
  if(flag == 0 && i > n)
{
   return i;   
}}
}


int countPrimes(int num1, int num2);{}
bool isTwinPrime(int n);{}
int nextTwinPrime(int n);{}
int largestTwinPrime(int a, int b);{}

int main(){

int num;
int div;
int n;


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


int num;
	cout<<"Enter a number: ";
	cin>>n;
	bool prime = isPrime(n);
	if(prime == true)
	{
		cout<<"The number "<<n<<" is prime."<<endl;
	}
	else
	{
		cout<<"The number "<<n<<" is not prime."<<endl;
	}
  
    int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Next prime = %d", nextPrime(n));    


int nextPrime(int n)
{
int flag;
    for(int i = (n + 1); ; i++)
{
  flag = 0;
  for(int j = 2; j < (i)/2; j++)
{
  if((i % j) == 0)
{
  flag = 1;   
  break;      
  }
  }
  if(flag == 0 && i > n)
{
   return i;   
}
}
{
int num1, num2;
cout << "Calculate the number of primes in the given range:\n";
cout << "Enter Number1:";
cin >> num1;
cout << "Enter Number2:";
cin >> num2;
  cout << "The count of prime numbers between " << num1 << " and " << num2 << " is " << countPrimes(num1, num2);
}
bool isDivisibleBy(int n, int d) 
{
return !(bool)(n % d);
}

bool isPrime(int n) 
{
for (int i = 2; i < n/2; ++i) 
{
if (n % i == 0) 
{
return false;
}
}
return true;
}

int nextPrime(int n) 
{
int i = n;
do {
i++;
} while (isPrime(i));
return i;
}
int countPrimes(int num1, int num2) 
{
int count = 0;
if (num2 < 2) 
{
return 0;
}
int temp = num1;
if (temp == 2) 
{
count++;
}
if (temp % 2 == 0) 
{
temp++;
}
for (int i = temp; i <= num2; i = i + 2) 
{
  if (isPrime(i)) 
  {
  count++;
  }
}
return count;
}
{
int n;

cout<<"Enter an integer: ";
cin>>n;

if(isTwin(n)){
cout<<n<<" is a twin prime.";
}
else{
cout<<n<<" is not a twin prime.";
}

}
{
int tPrime = nextTwinPrime(100);
cout<<"The twin primes are: "<<tPrime<<" and "<<tPrime+2;

}
