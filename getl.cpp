#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
string s1,s2;
cout<<"Enter first name :";
cin>>s1;
fflush(0);
cout<<"Enter second name :";
cin>>s2;
//getline(cin,s2);
cout<<"Input from cin function of first name is :"<<s1;
cout<<"\nInput from getline function of second name is :"<<s2;
return 0;
}

