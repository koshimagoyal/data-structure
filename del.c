#include<stdio.h>
void main()
{
	int a[50],i,n,no,pos,j;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("\n The array elements are");
	for(i=1;i<=n;i++)
		printf("\t%d",a[i]);
	printf("\n enter the no to be deleted and the position");
	scanf("%d %d",&no,&pos);
	for(i=1;i<=n;i++)
	{
		if(a[i]==no&&i==pos)
		{
			for(j=i;j<=n;j++)
				a[j]=a[j+1];
			break;
		}
	}
	printf("\n The upgraded array elements are");
	for(i=1;i<n;i++)
		printf("\t%d",a[i]);
		
}
