#include<stdio.h>
#include<string.h>

int top=-1;
char arr[100];

void push(char x)
{
if(top==100-1)
printf("Stack is full\n");
else
arr[++top] = x;
}

char pop()
{
char temp;
if(top==-1)
{
return '$';
}
else
temp = arr[top--];
return temp;
}

int main()
{
int j=0;
char s1[100];
char s[100];
scanf("%s",s);
for(int i=0;i<strlen(s);i++)
{
if(s[i]>=48 && s[i]<=57)
{
s1[j]=s[i];
j++;
}
else
{
//&& (arr[top]!='{' || arr[top]!='}')
if((s[i]=='+' || s[i]=='-') && top!=-1 && arr[top]!='(')
{
	while(top!=-1 &&arr[top]!=)
	{
	char k = pop();
	s1[j]=k;
	j++;
	}
	pop();
	push(s[i]);
}
else if(s[i]==')')
{
	while(arr[top]!='(')
	{
	s1[j]=pop();
	j++;
	}
	pop();
}
else if(s[i]=='*' || s[i]=='/')
{
	while(top!=-1 && arr[top]!='+' && arr[top]!='-' && arr[top]!='(')
	{
	char k = pop();
	s1[j]=k;
	j++;
	}
	if(arr[top]=='(')
	pop();
	push(s[i]);
}
else
push(s[i]);
}
}
while(top!=-1)
{
s1[j]=arr[top];
j++;
pop();
}
printf("%s",s1);
return 0;
}
