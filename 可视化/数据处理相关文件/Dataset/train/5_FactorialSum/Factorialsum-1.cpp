#include<iostream>
using namespace std;
int fac(int n)
{
	int i;
	if(n==1)
	{
		i=1;
	}
	else i=n*fac(n-1);
	return(i);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<fac(a)+fac(b);
	return 0;
}

