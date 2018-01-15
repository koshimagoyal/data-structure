#include<stdio.h>
void main()
{
	int a[50],i,n,no,low,mid,high,flag=0;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the elements of sorted array");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n The array elements are");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	printf("\n enter the no to be searched");
	scanf("%d",&no);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(a[mid]<no)
			low=mid-1;
		if(a[mid]>no)
			high=mid+1;
		if(a[mid]==no)
		{
			flag=1;
			break;
		}	
		mid=(low+high)/2;
	}	
	if(flag==1)
		printf("\n %d found at position %d",no,mid+1);
	else
		printf("\n The no is not presented in array");
}
