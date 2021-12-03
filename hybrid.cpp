#include<iostream>
#include<cstring>
using namespace std;

class Student{
protected:
string name;
public:
void getname(string n)
{
name =n;
}
void putname()
{
cout<<"Name is "<<name;
}
};

class Test:public Student{
protected:
int m,n;
public:
void getmarks(int a,int b)
{
m=a;
n=b;
}
void putmarks()
{
cout<<"\nMarks in first subject is :"<<m;
cout<<"\nMarks in second subject are :"<<n;
}
};

class sports{
protected:
int sp;
public:
void get_sp(int s)
{
sp = s;
}
void put_sp()
{
cout<<"\nMarks in sports are :"<<sp;
}
};

class result:public Test,public sports{
protected:
int marks;
public:
void display()
{
marks = m+n+sp;
putname();
putmarks();
put_sp();
cout<<"\nMarks in total are :"<<marks;
}
};

int main()
{
result obj;
obj.getname("Shivansh");
obj.getmarks(90,99);
obj.get_sp(95);
obj.display();
return 0;
}
