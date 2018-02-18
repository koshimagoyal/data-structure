#include<stdio.h>
struct node
{
	int info;
	struct node * next;
}*h,*n,*z;
void createnode()
{
	n=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the information");
	scanf("%d",&n->info);
	n->next=n;
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
		for(z=h;z->next!=h;z=z->next);
		z->next=n;
		h=n;
	}
}
void display()
{
	z=h;
	while(z->next!=h)
	{
		printf("\n%d",z->info);
		z=z->next;
	}
	printf("\n%d",z->info);
}
void main()
{
	insertatbeg();
	insertatbeg();
	insertatbeg();
	insertatbeg();
	insertatbeg();
	display();
}
