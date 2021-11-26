#include<iostream>
using namespace std;

class A
{
protected:
int m;
public:
void get_m(int);
};

void A::get_m(int x)
{
m=x;
}

class B{
protected:
int n;
public:
void get_n(int);
};

void B::get_n(int x)
{
n=x;
}

class C:public A,public B
{
public:
int c;
void display();
int add();
};

int C:: add()
{
c=m+n;
}

void C:: display(void)
{
cout<<"Value of m "<<m<<"\n";
cout<<"Value of n "<<n<<"\n";
cout<<"Addition is "<<c;
}

int main()
{
C obj;
obj.get_n(10);
obj.get_m(20);
obj.add();
obj.display();
return 0;
}
