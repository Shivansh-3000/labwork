//Create a class called tollbooth.The two data items are of type unsigned int to hold the total number of cars , and a type double to hold ther total amount of money collected. A member function initializes both of these to 0. A member function called payingCar() increaments the car total and adds 50 to the cash total. Another function called nopayCar() the increaments car total but adds nothing to the cash total.Finally a memeber function called display() displays the two total.Take appropriaate member function constant also make this program menu driven. 

#include<iostream>
using namespace std;

unsigned c;
double s;
class tollbooth
{
public:
void setdata()
{
c=0;
s=0;
}
void payingCar()
{
const int val=50;
 c++;
 s+=val;
}

void nopayCar()
{
c++;
}

void display()
{
cout<<"\nNumber of cars :"<<c;
cout<<"\n Money collected :"<<s;
}
};

int main()
{
tollbooth obj;
cout<<"\nEnter 1 for Paying Cars\nEnter two for no Paying cars";
cout<<"\nEnter 3 to display\nEnter 4 to exit";
int a=1,ch;
while(a)
{
	cout<<"\nEnter your choice :";
	cin>>ch;
	obj.setdata();
	switch(ch)
	{
	case 1:obj.payingCar();
	break;
	case 2:obj.nopayCar();
	break;
	case 3:obj.display();
	break;
	case 4:a=0;
	break;
	}
}
return 0;
}
