#include<stdio.h> 
#include<string.h> 
 
void fillSpiral(char matrix[100][100],int n) 
{ 
 char currentchar='A'; 
 int rowstart=0,rowend=n-1; 
 int colstart=0,colend=n-1; 
 int i,j; 
 while(rowstart<=rowend && colstart<=colend) 
 { 
  for(i=colstart;i<=colend;i++) 
  { 
   matrix[rowstart][i]=currentchar++; 
  } 
  rowstart++; 
  for(i=rowstart;i<=rowend;i++) 
  { 
   matrix[i][colend]=currentchar++; 
  } 
  colend--; 
  
 if(rowstart<=rowend) 
 { 
    for(i=colend;i>=colstart;i--) 
  { 
   matrix[rowend][i]=currentchar++; 
  } 
  rowend--;  
 } 
 if(colstart<=colend) 
 { 
  for(i=rowend;i>=rowstart;i--) 
  { 
   matrix[i][colstart]=currentchar++; 
  } 
  colstart++; 
 } 
 } 
} 
void displaymatrix(char matrix[100][100],int n) 
{ 
 int i,j; 
 for(i=0;i<n;i++) 
 { 
  for(j=0;j<n;j++) 
  { 
   printf("%c\t",matrix[i][j]); 
  } 
  printf("\n"); 
 } 
} 
 
int main() 
{ 
 int n; 
 printf("enter size of matrix:"); 
 scanf("%d",&n); 
 char matrix[100][100]; 
 fillSpiral(matrix,n); 
 displaymatrix(matrix,n); 
 return 0; 
}
