#include<stdio.h>
void main()
{
	int a[50],i,n,no,pos;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("\n The array elements are");
	for(i=1;i<=n;i++)
		printf("\t%d",a[i]);
	printf("\n enter the no to be inserted and the position");
	scanf("%d %d",&no,&pos);
	for(i=n+1;i>=1;i--)
	{
		if(i==pos)
		{
			a[i]=no;
			break;
		}
		else
			a[i]=a[i-1];
	}
	printf("\n The upgraded array elements are");
	for(i=1;i<=n+1;i++)
		printf("\t%d",a[i]);
		
}
