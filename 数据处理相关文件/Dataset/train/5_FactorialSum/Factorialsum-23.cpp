#include <iostream>
using namespace std;
int fac(int x)
{
	int y=1;
	for(;x>0;x--)
	{
		y=y*x;
	}
	return(y);
}
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=fac(a)+fac(b);
	cout<<c;
	return 0;
}

