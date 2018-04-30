#include<stdio.h>
void main()
{
	int i,j,r1,c1,r2,c2;
	printf("\n enter the rows and columns of 2D array");
	scanf("%d %d",&r1,&c1);
	int a[r1][c1];
	printf("\n enter the elements of array");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter the rows and columns of 2D array");
	scanf("%d %d",&r2,&c2);
	int b[r2][c2];
	printf("\n enter the elements of array");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Array elements are\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
