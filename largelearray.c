#include<stdio.h>
void main()
{
	int a[5],i,max;;
	printf("\n enter the elements for array");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n array elements are ");
	for(i=0;i<5;i++)
		printf("\t%d",a[i]);
	max=a[0];
	printf("\n largest number is ");
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf(" %d",max);
}
