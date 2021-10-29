#include<iostream>
using namespace std;

class Test{
int a,b;
public:
Test()
{
a=1;b=2;
}

void operator-(Test &obj5)
{
	cout<<b-obj5.a;
}

friend void operator ++(Test &obj1);
friend void operator --(Test &obj2);
friend void operator+(Test &obj3,Test &obj4);
};

void operator ++(Test &obj1)
{
++obj1.a;
}

void operator --(Test &obj2)
{
--obj2.a;
}

void operator+(Test &obj3,Test &obj4)
{
cout<<obj3.a+obj4.b;
}

int main()
{
Test t1,t2;
t1+t2;
t1.operator-(t2);
return 0;
}
