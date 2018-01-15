#include<stdio.h>
void main()
{
	int a[50],i,n1,n2,no,b[50],j,c[50],k;
	printf("\n enter the size of first array");
	scanf("%d",&n1);
	printf("\n enter the elements of first sorted array");
	for(i=1;i<=n1;i++)
		scanf("%d",&a[i]);
	printf("\n enter the size of second array");
	scanf("%d",&n2);
	printf("\n enter the elements of second sorted array");
	for(i=1;i<=n2;i++)
		scanf("%d",&b[i]);
	printf("\n The first array elements are");
	for(i=1;i<=n1;i++)
		printf("\t%d",a[i]);
	printf("\n The second array elements are");
	for(i=1;i<=n2;i++)
		printf("\t%d",b[i]);
	k=0;
	for(i=1,j=1;i<=n1&&j<=n2;i++,j++)
	{
	 	if(a[i]<b[j])
		{
			c[k]=a[i];
			c[++k]=b[j];
		}
		else
		{
			c[k]=b[j];
			c[++k]=a[i];
		}
		k++;
	}
	if(n1>n2)
		c[k++]=a[i];
	else
		c[k++]=b[j];
	printf("\n The merged array elements are");
	for(i=0;i<n1+n2;i++)
		printf("\t%d",c[i]);
}
