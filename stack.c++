#include<iostream>
#include<stack>
using namespace std;
const int size=10;
void display(stack<int>s)
{
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}
int main()
{
	stack<int>s1;
	int x;
	cout<<"enter elements:";
	while(x!=-1)
	{
		cin>>x;
		if(x!=-1)
		   s1.push(x);
	}
	cout<<"size:"<<s1.size()<<endl;
	cout<<"elements:\n";
	display(s1);
	return 0;
}
