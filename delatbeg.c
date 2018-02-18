#include<stdio.h>
struct node
{
	int info;
	struct node*next;
}*n,*h,*z;
void createnode()
{
	n=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the information");
	scanf("%d",&n->info);
	n->next=NULL;
}
void insertatend()
{
	createnode();
	if(h==NULL)
	{
		h=n;
	}
	else
	{
		for(z=h;z->next!=NULL;z=z->next);
		z->next=n;
	}
	
}
void delatbeg()
{
	if(h==NULL)
		printf("\n linked list does not exist");
	else
	{
		z=h;
		h=z->next;
		printf("\n the node deleted = %d",z->info);
		free(z);
	}
}
void display()
{
	z=h;
	while(z!=NULL)
	{
		printf("\n%d",z->info);
		z=z->next;
	}
}
void main()
{
	insertatend();
	insertatend();
	insertatend();
	insertatend();
	display();
	delatbeg();
	printf("\n After deletion from beginning");
	display();
}
