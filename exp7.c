#include<stdio.h>
int main()
{
	int n=5;
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*(n-i)-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<2*i+1;k++)
		{
			if(k==0||k==2*i||i==n-1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
