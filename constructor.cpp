#include<iostream>
using namespace std;

class Number
{
int a;
public:
Number()
{
a=0;
}
Number(int num)
{
a=num;
}
Number(Number &obj)
{
cout<<"Copy constructor invoked \n";
a=obj.a;
}
void display()
{
cout<<"Number is "<<a<<"\n";
}
};

int main()
{
Number x,y,z(40),z2;
x.display();
y.display();
z.display();
Number z1(z);
z1.display();
z2=z;
z2.display();
Number z3(z);
z3.display();
return 0;
}
