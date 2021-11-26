#include<iostream>
using namespace std;

class base
{
int d1;
public:
int d2;
void setdata()
{
d1=500;
d2=600;
}
int getdata()
{
return d1;
}
};

class child:public base
{
int d3;
public:
void process()
{
d3 = getdata()*d2;
}
void display()
{
cout<<getdata()<<" "<<d2<<" "<<d3;
}
};

int main()
{
child a;
a.setdata();
a.process();
a.display();
}
