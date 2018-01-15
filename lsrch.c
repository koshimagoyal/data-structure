#include<stdio.h>
void main()
{
	int a[50],i,n,no,flag=0;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("\n The array elements are");
	for(i=1;i<=n;i++)
		printf("\t%d",a[i]);
	printf("\n enter the no to be searched");
	scanf("%d",&no);
	for(i=1;i<=n;i++)
	{
		if(a[i]==no)
		{
			printf("\n %d is found at position %d",no,i);
			flag=1;	
		}	
	}	
	if(flag!=1)
		printf("\n The no is not presented in array");
}
