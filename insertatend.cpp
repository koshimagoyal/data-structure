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
		h=z;
	}
	else
	{
		for(z=h;z->next!=NULL;z=z->next);
		z->next=n;
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
}
