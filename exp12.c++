#include<iostream>
using namespace std;
void permutations(string a,int l,int r)
{
	if(l==r)
	   cout<<a<<endl;
	else
	{
	int i;
	for(i=l;i<=r;i++)
	{
	char t=a[i];
	a[i]=a[l];
	a[l]=t;
	permutations(a,l+1,r);
	t=a[i];
	a[i]=a[l];
	a[l]=t;
	}
	}
}
int main()
{
	string s;
	int l=0;
	cout<<"enter string:";
	cin>>s;
	int r=s.length()-1;
	permutations(s,l,r);
	return 0;
}
