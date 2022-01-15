#include<iostream>
using namespace std;
int main()
{
	int i,a,b,c,p,r,q;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(b=0;b<a-i;) 
		{
			cout<<' ';
			b=b+1;
		}
		for(c=0;c<2*i-1;)
		{
			cout<<"*";
			c=c+1;
		}
		cout<<'\n';
	}
	for(p=1;p<=a-1;p++)
	{
		for(q=1;q<=p;q++)
	       {
			cout<<' ';
		}
		for(r=1;r<=2*a-1-2*p;r++)
		{
			cout<<"*";
		}
		cout<<'\n';
	}
}    



