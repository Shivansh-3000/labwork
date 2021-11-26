#include<iostream>
using namespace std;

class Employee
{
public:
int id;
float salary;
Employee(){}
Employee(int inpt)
{
id = inpt;
salary = 5600;
}
};

class Programmer:public Employee
{
public:
int language;
Programmer(int inpt)
{
id = inpt;
language = 10;
}

void display()
{
cout<<id<<"\n";
}
};

int main()
{
Employee tom(2),jerry(5);
cout<<tom.salary<<"\n"<<jerry.salary<<"\n";
Programmer P(50);
cout<<P.language<<"\n"<<P.id<<"\n";
P.display();
return 0;
}
