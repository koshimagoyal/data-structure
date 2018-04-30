#include<stdio.h>
void main()
{
	int i,j,r,c;
	printf("\n enter the rows and columns of 2D array");
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("\n enter the elements of array");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Array elements are\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	int no;
	printf("\n enter the number you want to search in array");
	scanf("%d",&no);
	int flag=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==no)
			{
				printf("\n%d is found at position %d%d",no,i,j);
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
		printf("\n %d is not found",no);
}
