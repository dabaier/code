#include<iostream>
using namespace std;
int fac(int x)
{
	int z=1;
	for(int i=1;i<=x;i++)
	{
		z=z*i;
	}

	return z;
}
int main()
{
	int a,b,c,d;
	cin>>a>>b;
	c=fac(a);
	d=fac(b);
	cout<<c+d;
	return 0;
}
