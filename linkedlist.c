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
void insertatbeg()
{
	createnode();
	if(h==NULL)
	{
		h=n;
	}
	else
	{
		n->next=h;
		h=n;
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
	insertatbeg();
	insertatbeg();
	insertatbeg();
	insertatbeg();
	display();
}
