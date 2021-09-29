//Date-29/09/2021
//Name-Shivansh Gairola
//Student Id - 20011506
//Write a program to input a number from the user and check whether it is an armstrong number or not

#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int main()
{
int n,n1,c=0;
cin>>n;
n1=n;
while(n1)
{
c++;
n1 = n1/10;
}
n1=n;
int sum=0;
while(n1)
{
sum = sum + pow(n1%10,c);
n1/=10;
}
if(n==sum)
cout<<"It is an armstrong number";
else
cout<<"It is not a armstrong number";
return 0;
}
