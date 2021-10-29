#include<iostream>
using namespace std;

class Test{
public:
int a;
Test()
{
a=0;
}
friend void operator ++(Test &obj1);
friend void operator --(Test &obj2);
};

void operator ++(Test &obj1)
{
++obj1.a;
}

void operator --(Test &obj2)
{
--obj2.a;
}


int main()
{
Test t;
++t;
--t;
return 0;
}
