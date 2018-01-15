#include<stdio.h>
void main()
{
	int a[50],i,n1,n2,no,b[50],j;
	printf("\n enter the size of first array");
	scanf("%d",&n1);
	printf("\n enter the elements of first array");
	for(i=1;i<=n1;i++)
		scanf("%d",&a[i]);
	printf("\n enter the size of second array");
	scanf("%d",&n2);
	printf("\n enter the elements of seccond array");
	for(i=1;i<=n2;i++)
		scanf("%d",&b[i]);
	printf("\n The first array elements are");
	for(i=1;i<=n1;i++)
		printf("\t%d",a[i]);
	printf("\n The second array elements are");
	for(i=1;i<=n2;i++)
		printf("\t%d",b[i]);
	for(i=n1+1,j=1;i<=n1+n2;i++,j++)
		a[i]=b[j];
	printf("\n concatenated array elements are");
	for(i=1;i<=n1+n2;i++)
		printf("\t%d",a[i]);
}
