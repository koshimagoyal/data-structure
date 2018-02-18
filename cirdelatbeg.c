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
		n=h;
		for(z=h;z->next!=h;z=z->next);
		z->next=n->next;
		printf("\n Deleted information = %d",n->info);
		h=n->next;
		free(n);
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
	delatbeg();
	display();
}
