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
void delatbeg()
{
	if(h==NULL)
		printf("\n list does not exist");
	else
	{
		int pos;
		printf("\n enter the desired position where you want to delete node");
		scanf("%d",&pos);
		int count=1;
		for(z=h;z->next!=h;z=z->next)
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
	display();
	printf("\n after deleting from begining");
	delatbeg();
	display();
}
