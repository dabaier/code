#include <iostream>
using namespace std;
int fac(int a,int b)
{
	cout<<a<<"*"<<b<<"="<<a*b<<' '<<' ';
	return 0;
}
int mul(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		fac(i,n);
	}
	return 0;
}
int main()
{
	int i=1,n;
	cin>>n;
	for(;i<=n;i++)
	{
		mul(i);
		cout<<endl;
	}
	return 0;
}
