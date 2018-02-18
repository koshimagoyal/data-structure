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
void delatdesired()
{
	if(h==NULL)
		printf("\n linked list does not exist");
	else
	{
		int pos;
		printf("\n enter the desired position where you want to delete node");
		scanf("%d",&pos);
		int count=1;
		for(z=h;z->next!=NULL;z=z->next)
		{
			if(count==pos-1)
			{
				n=z->next;
				printf("\n the node deleted = %d",n->info);
				z->next=n->next;
				free(n);
				break;
			}
			count++;
		}
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
	delatdesired();
	printf("\n After deletion from desired position");
	display();
}
