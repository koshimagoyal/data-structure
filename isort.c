#include<stdio.h>
void main()
{
	int a[50],i,n,j,temp;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("\n The array elements are");
	for(i=1;i<=n;i++)
		printf("\t%d",a[i]);
	for(i=1;i<=n+1;i++)
	{
		for(j=i;j>1&&a[j]<a[j-1];j--)
		{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
		}
	}
	printf("\n The sorted array elements are");
	for(i=1;i<=n;i++)
		printf("\t%d",a[i]);
}
