#include<iostream>
using namespace std;

void area(int s)
{
cout<<"Area of square is "<<s*s<<"\n";
}

void area(int l,int b)
{
cout<<"Area of rectangle is "<<l*b<<"\n";
}

void area(int r,double p)
{
cout<<"Area of circle is "<<p*r*r;
}

int main()
{
int l,b,s,r;
cout<<"Enter the side of square :";
cin>>s;
cout<<"Enter the length and breath of a rectangle :";
cin>>l>>b;
cout<<"Enter the radius of circle :";
cin>>r;
area(s);
area(l,b);
area(r,3.14);
return 0;
}
