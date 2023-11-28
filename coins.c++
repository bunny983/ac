#include<iostream>
#include<vector>
using namespace std;
int main()
{
   	int v;
    cout<<"enter value:";
    cin>>v;
	int deno[]={1,2,5,10,20,50,100,200,500,2000};
	int i,c;
	for(i=9;i>=0;i--)
	{
		c=0;
		while(v>=deno[i])
		{
			v-=deno[i];
			c+=1;
		}
		if(c>0)
	    {
	    cout<<deno[i]<<"X"<<c<<endl;
		}
	}
	return 0;
}
