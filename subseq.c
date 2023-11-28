#include<stdio.h>
#include<string.h>
#define MAXSIZE 200
int max(int a,int b)
{
	return (a>b)?a:b;
}
int findmaxsubsequence(char s1[],char s2[])
{
	int m=strlen(s1);
	int n=strlen(s2);
	int dp[MAXSIZE][MAXSIZE];
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
			   {
			     dp[i][j]=0;
			   }
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else   
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[m][n];
}
int main()
{
	char s1[MAXSIZE],s2[MAXSIZE];
	printf("enter string1:");
	scanf("%s",s1);
	printf("enter string2:");
	scanf("%s",s2);
	int result=findmaxsubsequence(s1,s2);
	printf("max subsequence:%d",result);
	return 0;
}
