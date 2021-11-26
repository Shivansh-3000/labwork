#include<iostream>
using namespace std;

class A{
int a;
public:
void set_a(int val)
{
a=val;
}
int get_a()
{
return a;
}
};

class B:public A
{
int b;
public:
void set_b()
{
b=get_a();
}
int get_b()
{
return b;
}
};

class Oyeah:public B
{
int c;
public:
void set_c(){
c=get_b();
}
int get_c(){
return c;
}
};

int main()
{
Oyeah W;
W.set_a(10);
W.set_b();
W.set_c();
cout<<W.get_c();
return 0;
}
