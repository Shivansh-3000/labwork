#include<iostream>
#include<cstring>
using namespace std;

class stu{
string name;
long id;int sub[6];
public:
void getdata();
void result();
};

void stu::getdata()
{
cout<<"Enter the name of the student :";
getline(cin,name);
cout<<"Enter the student id :";
cin>>id;
cout<<"Enter the marks of the student in 5 subjects \n";
for(int i=0;i<5;i++)
cin>>sub[i];
}

void stu::result()
{
cout<<"Name of the student is :"<<name;
float avg=0;int flag=1;
cout<<"\nId :"<<id;
for(int i=0;i<5;i++)
{
avg+=sub[i];
if(sub[i]<35)
flag=0;
}
avg = avg/6.0;
cout<<"\nAverage marks of the student is :"<<avg;
if(flag)
cout<<"\nStudent is Pass";
else
cout<<"Student is Fail";
}

int main()
{
stu obj;
obj.getdata();
obj.result();
return 0;
}


