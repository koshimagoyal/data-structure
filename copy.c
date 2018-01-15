#include<stdio.h>
void main()
{
	int a[50],i,n1,n2,no,b[50],j;
	printf("\n enter the size of array");
	scanf("%d",&n1);
	printf("\n enter the elements of array");
	for(i=1;i<=n1;i++)
		scanf("%d",&a[i]);
	printf("\n The array elements are");
	for(i=1;i<=n1;i++)
		printf("\t%d",a[i]);
	for(i=1;i<=n1;i++)
		b[i]=a[i];
	printf("\n copied array elements are");
	for(i=1;i<=n1;i++)
		printf("\t%d",b[i]);
}
