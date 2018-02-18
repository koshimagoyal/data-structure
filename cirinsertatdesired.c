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
		n->next=h;
		z->next=n;
	}
	
}
void insertatdesired()
{
	int pos;
	createnode();
	printf("\n enter the position where you want to insert");
	scanf("%d",&pos);
	int count=1;
	for(z=h;z->next!=h;z=z->next)
	{
		if(count==pos-1)
		{
			n->next=z->next;
			z->next=n;
			break;
		}
		count++;
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
	display();
	insertatdesired();
	display();
}
