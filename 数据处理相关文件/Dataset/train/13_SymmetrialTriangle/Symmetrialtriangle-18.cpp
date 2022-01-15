#include<iostream>
using namespace std;
int main()
{
	int i,a,c,p,r;
	cin>>a;
	for(i=1;i<=a;i++)
	{

		for(c=0;c<i;)
		{
			cout<<"0";
			c=c+1;
		}
		cout<<'\n';
	}
	for(p=1;p<=a-1;p++)
	{

		for(r=1;r<=a-p;r++)
		{
			cout<<"0";
		}
		cout<<'\n';
	}
}    


