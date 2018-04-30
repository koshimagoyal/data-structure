#include<stdio.h>
void main()
{
	int a[5],i,max,flag=0;
	printf("\n enter the elements for array");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n array elements are ");
	for(i=0;i<5;i++)
		printf("\t%d",a[i]);
	printf("\n enter the no you want to search");
	scanf("%d",&max);
	for(i=0;i<5;i++)
	{
		if(max==a[i])
		{
			printf("\n the %d is found at %d",max,i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("\n %d is not found",max);
}
