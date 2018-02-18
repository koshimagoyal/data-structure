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
void insertatend()
{
	createnode();
	if(h==NULL)
	{
		h=n;
	}
	else
	{
		for(z=h;z->next!=h;z=z->next);
		z->next=n;
		n->next=h;
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
	insertatend();
	insertatend();
	insertatend();
	insertatend();
	insertatend();
	display();
}
