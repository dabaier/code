#include <iostream>
using namespace std;
int fac(int x)
{  
	int f;
	f=1;
	for(;x>=1;x--)
	{
		f=f*x;
	}
	return f;
}
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=fac(a)+fac(b);
	cout<<c<<endl;
	return 0;
}
