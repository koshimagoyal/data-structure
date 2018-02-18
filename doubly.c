#include<stdio.h>
struct node
{
	int info;
	struct node *prev;
	struct node *next;
}*h,*z,*n;
void createnode()
{
	n=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the information");
	scanf("%d",&n->info);
	n->next=NULL;
	n->prev=NULL;
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
		h->prev=n;
		h=n;
	}
}
void traversebackward()
{
	printf("\n backward");
	for(z=h;z->next!=NULL;z=z->next);
	while(z!=NULL)
	{
		printf("\n%d",z->info);
		z=z->prev;
	}
}
void traverseforward()
{
	printf("\n forward");
	z=h;
	while(z!=NULL)
	{
		printf("\n %d",z->info);
		z=z->next;
	}
}
void main()
{
		insertatbeg();
		insertatbeg();
		insertatbeg();
		traverseforward();
		traversebackward();
}
