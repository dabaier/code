#include <iostream>
using namespace std;
int fac(int n)
{
	int z;
	for(z=1;n>0;n--)
	{
		z=z*n;
	}
	return z;
}
int main()
{
	int a,b,sum,d,f;
	cin>>a>>b;
    d=fac(a);
	f=fac(b);
	sum=d+f;
	cout<<sum;
}
