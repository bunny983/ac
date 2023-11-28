#include<stdio.h>
int main()
{
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int m=3,n=3;
	int result[m*n];
	result[0]=matrix[0][0];
	int i=0,j=0,k=1;
	while(k<m*n)
	{
		while(i>=1 && j<n-1)
		{
			i--;
			j++;
			result[k++]=matrix[i][j];
		}
		if(j<n-1)
		{
		   j++;
		   result[k++]=matrix[i][j];	
		}
		else if(i<m-1)
		{
			i++;
			result[k++]=matrix[i][j];
		}
		
		while(i<m-1 && j>=1)
		{
			j--;
			i++;
			result[k++]=matrix[i][j];
		}
		if(i<m-1)
		{
			i++;
			result[k++]=matrix[i][j];
		}
		else if(j<n-1)
		{
		   j++;
		   result[k++]=matrix[i][j];	
		}
	}
	for(i=0;i<m*n;i++)
	     printf("%d\t",result[i]);
    return 0;
}
