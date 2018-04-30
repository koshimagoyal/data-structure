#include<stdio.h>
void main()
{
	int a[6],i,no,n,j,k;
	n=5;
	printf("\n enter the elements for array");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n array elements are ");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	printf("\n enter the number u want to insert and the position where you want to insert the number");
	scanf("%d %d",&no,&k);
	j=k;
	printf("\n updated array elements are ");
	while(j<n)
	{
		a[j-1]=a[j];
		j=j+1;
	}
	for(i=0;i<4;i++)
	{
		printf("\t%d",a[i]);
	}
}
