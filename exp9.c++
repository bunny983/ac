#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[],int n)
{
    int i;
	for(i=0;i<n;i++)
	    cout<<a[i]<<"\t";
}
int main()
{
	int n,a[20],x,i;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(i=0;i<n;i++)
	    cin>>a[i];
	show(a,n);
	sort(a,a+n);
	cout<<"enter element to be searched:";
	cin>>x;
	if(binary_search(a,a+n,x))
	        cout<<"element found"<<endl;
	else
	         cout<<"element not found"<<endl;
}
