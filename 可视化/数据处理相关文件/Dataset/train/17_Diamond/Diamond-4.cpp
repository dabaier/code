#include<iostream>
using namespace std;
int main()
{
	int i,a,m,n,p,r,q;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(m=0;m<a-i;m++) 
		{
			cout<<" ";
		}
		for(n=0;n<2*i-1;n++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(p=1;p<=a-1;p++)
	{
		for(q=1;q<=p;q++)
		{
			cout<<" ";
		}
		for(r=1;r<=2*a-1-2*p;r++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
 


