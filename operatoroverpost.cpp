#include<iostream>
using namespace std;

class Test{
int a;
public:
Test()
{
a=0;
}

void operator ++(int)
{
a++;
}

void operator --(int)
{
a--;
}

void show()
{
cout<<a<<"\n";
}
};

int main()
{
Test t;
t++;
t.show();
t--;t.show();
return 0;
}
