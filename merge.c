#include<stdio.h>
void main()
{
	int t,i,j,n1,n2,l;
	char s1[100],s2[100],s3[100];
	scanf("%d",&t);
	fflush(stdin);
	while(t--)
	{
		scanf("%s",s1);
		scanf("%s",s2);
		n1=strlen(s1);
		n2=strlen(s2);
		//printf("%d %d %d",n1,n2,n1+n2);
		j=0;
		l=0;
		for(i=0;i<=(n1+n2);i++)
		{
			if(i%2==0&&l<n1)
			{
				s3[i]=s1[l];
				l++;
			}
			else if(i%2!=0&&j<n2)
			{
				s3[i]=s2[j];
				j++;
			}
			else
			{
				if(n1>n2)
				{
					s3[i]=s1[l];
					l++;
				}
				else
				{
					s3[i]=s2[j];
					j++;	
				}
			}
		}
		puts(s3);
	}
}
