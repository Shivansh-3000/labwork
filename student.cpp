//Name - Shivansh Gairola
//Student Id - 20011506
//Write a program to input student details of n users using function

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int flag=0;

typedef struct stu{
char name[101],rollno[20],college[101],address[101],branch[20];
}s;

void insert(int i,s obj[])
{
cout<<"Enter the student details of "<<i+1<<" students\n";
fflush(stdin);
cout<<"Enter name :";fflush(stdin);
char s[101];
if(flag==0)
{
fgets(s,101,stdin);
flag=1;
}
fgets(obj[i].name,101,stdin);
cout<<"Enter rollno :";
fgets(obj[i].rollno,20,stdin);
cout<<"Enter college name :";
fgets(obj[i].college,101,stdin);
cout<<"Enter the address :";
fgets(obj[i].address,101,stdin);
cout<<"Enter your branch :";
fgets(obj[i].branch,20,stdin);
}


int main()
{
int n;
cout<<"Enter how many student entry you want to make :";
cin>>n;fflush(stdin);
s obj[n];
for(int i=0;i<n;i++)
{
insert(i,obj);
}
for(int i=0;i<n;i++)
{
cout<<"\nName of "<<i+1<<" student is "<<obj[i].name;
cout<<"\nRollno of "<<i+1<<" student is "<<obj[i].rollno;
cout<<"\nCollege name of "<<i+1<<" student is "<<obj[i].college;
cout<<"\nAddress of "<<i+1<<" student is "<<obj[i].address;
cout<<"\nBranch of "<<i+1<<" student is "<<obj[i].branch;
cout<<"\n\n";
}
return 0;
}
