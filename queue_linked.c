//Write a c program to create a linked list by insrting nodes in right hand side and then print the list
#include<stdio.h>
#include<malloc.h>

typedef struct Node{
int data;
struct Node* next;
}node;

node* head=NULL;
node* tail=NULL;

void insert(int val)
{
node* p = (node*)malloc(sizeof(node));
p->data = val;
p->next=NULL;
if(head==NULL)
{
	head=p;
	tail=p;
}
else
{
	tail->next = p;
	tail=p;
}
}

int main()
{
	printf("Press 1 to insert a node\nPress 2 to display\nPress 3 to Quit");
	int ch;
	do{
	printf("\n\nEnter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("Enter the value of the node :");
	int val;
	scanf("%d",&val);
	insert(val);
	break;
	case 2:
	printf("Linked list is :");
	node* temp = head;
	while(temp!=NULL)
	{
	printf("%d ",temp->data);
	temp = temp->next;
	}
	break;
	case 3:
	printf("Exit");
	break;
	default:
	printf("Wrong choice\n");
	break;
	}
	}while(ch!=3);
	return 0;
	}
