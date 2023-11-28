#include <iostream>
#include<string>
using namespace std;
int lcw(string u,string v)
{
    int cw[50][50],r,w,m,n,c;
    m=u.length();
    n=v.length();
    for(r=0;r<=m;r++)
    cw[r][n]=0;
    for(c=0;c<=n;c++)
    cw[m][c]=0;
    for(c=n-1;c>=0;c--)
    for(r=m-1;r>=0;r--)
    {
        if(u[r]==v[c])
        cw[r][c]=1+cw[r+1][c+1];
        else
        cw[r][c]=max(cw[r+1][c],cw[r][c+1]);
    }
    return cw[0][0];
}
int main() 
{
  cout<<"enter string";
  string u;
  string v;
  cin>>u>>v;
  int l=lcw(u,v);
  cout<<l;
  return 0;
}
