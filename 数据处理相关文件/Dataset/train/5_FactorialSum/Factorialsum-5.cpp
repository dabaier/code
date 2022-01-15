#include <iostream>
using namespace std;
int fac(int n)
{
	int z=1;
	for(int i=1;i<=n;i++)
	{
		z=z*i;
	}
	return z;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int sum;
	sum=fac(a)+fac(b);
	cout<<sum;
	return 0;
}

