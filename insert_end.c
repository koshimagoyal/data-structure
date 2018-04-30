#include<stdio.h>
struct node
{
	int info;
	struct node *next;
}*h,*n,*z;
void create_node()
{
	n = (struct node*)malloc(sizeof(struct node));
	printf("\n enter the information");
	scanf("%d",&n->info);
	n->next=NULL;
}
void insert_end()
{
	create_node();
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
void display()
{
	z=h;
	while(z!=NULL)
	{
		printf("\t %d",z->info);
		z=z->next;
	}
}
void main()
{
	insert_end();
	insert_end();
	insert_end();
	insert_end();
	insert_end();
	display();
}
