#include<stdio.h>
struct node
{
	int info;
	struct node *next;
	struct node *prev;
}*h,*n,*z,*h1;
void create_node()
{
	n = (struct node*)malloc(sizeof(struct node));
	printf("\n enter the information");
	scanf("%d",&n->info);
	n->next=NULL;
	n->prev=NULL;
}
void create_list()
{
	create_node();
	if(h1==NULL)
	{
		h1=n;
	}
	else
	{
		h1->prev=n;
		n->next=h1;
		h1=n;
	}
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
		n->prev=z;
	}
}

void insert_beg()
{
	create_node();
	if(h==NULL)
	{
		h=n;
	}
	else
	{
		h->prev=n;
		n->next=h;
		h=n;
	}
}
void insert_desired()
{
	int pos,count=0;
	create_node();
	printf("\n enter the position where you want to insert");
	scanf("%d",&pos);
	for(z=h,count=1;count<=pos-2;z=z->next,count=count+1);
		n->next=z->next;
		z->next=n;
		n->prev=z;
}
void delete_beg()
{
	n=h;
	printf("\n the no to be deleted is %d",n->info);
	h=n->next;
	free(n);
}
void delete_end()
{
	for(z=h;z->next->next!=NULL;z=z->next);
	n=z->next;
	printf("\n the no to be deleted is %d",n->info);
	z->next=NULL;
	n->prev=NULL;
	free(n);
	
}
void delete_desired()
{
	int pos,count=0;
	printf("\n enter the position where you want to delete");
	scanf("%d",&pos);
	for(z=h,count=1;count<=pos-2;z=z->next,count=count+1);
	n=z->next;
	z->next=n->next;
	n->next->prev=z;
	printf("\n the no to be deleted is %d",n->info);
	free(n);	
	
}
void search()
{
	int key,flag=0,i;
	printf("\n enter the no you want to search");
	scanf("%d",&key);
	for(i=0,z=h;z!=NULL;z=z->next,i++)
	{
		if(z->info==key)
		{
			printf("\n %d is found at %d",key,i+1);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n %d is not found",key);
	}
}
void sort()
{
	
}
void merge()
{
	create_list();
	fflush(stdin);
	create_list();
	fflush(stdin);
	create_list();
	fflush(stdin);
	create_list();
	for(z=h;z->next!=NULL;z=z->next);
	z->next=h1;
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
void prev_display()
{
	for(z=h;z->next!=h;z=z->next)
	{
		printf("\t %d",z->info);
	}
	printf("\t %d",z->info);
}
void main()
{
	char y,ans;
	int ch;
	do
	{
		printf("\n  1.insert at begin");
		printf("\n  2.insert at end");
		printf("\n  3.insert at desired");
		printf("\n  4.delete at begin");
		printf("\n  5.delete at end");
		printf("\n  6.delete at desired");
		printf("\n  7.search");
		printf("\n  8.sort");
		printf("\n  9.display");
		printf("\n 10.display reverse");
		printf("\n 11.merge");
		printf("\n 12.exit");
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert_beg();
					break;
			case 2: insert_end();
					break;
			case 3: insert_desired();
					break;
			case 4: delete_beg();
					break;
			case 5: delete_end();
					break;
			case 6: delete_desired();
					break;
			case 7: search();
					break;
			case 8: sort();
					break;
			case 9: display();
					break;
			case 10: prev_display();
					 break;
			case 11: merge();
					 break;
			case 12: exit(1);
					 break;
			default: printf("\n wrong input");
					 break;
		}
		printf("\n enter y if you want to continue");
		fflush(stdin);
		scanf("%c",&ans);
		
	}while(ans=='y');
}
