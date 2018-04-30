#include<stdio.h>
void main()
{
	int a[6],i,no,n,j;
	n=5;
	j=n;
	printf("\n enter the elements for array");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n array elements are ");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	printf("\n enter the number u want to insert at beginning of array");
	scanf("%d",&no);
	printf("\n updated array elements are ");
	while(j>=0)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[0]=no;
	for(i=0;i<6;i++)
	{
		printf("\t%d",a[i]);
	}
}
