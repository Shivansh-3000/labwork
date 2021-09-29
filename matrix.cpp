//Date-29/09/2021
//Name - Shivansh Gairola
//Student Id - 20011506
//Write a program to input rows and columns in 2d matrix and print them

#include<iostream>
using namespace std;

int main()
{
int m,n;
cout<<"Enter rows and column of matrix\n";
cin>>m>>n;
int a[m][n];
cout<<"Enter the elements \n";
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}cout<<"\n";
}
return 0;
}
