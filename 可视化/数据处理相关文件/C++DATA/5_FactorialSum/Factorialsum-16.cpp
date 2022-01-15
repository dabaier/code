#include <iostream>
using namespace std;
int fac(int x)
{
	int i=1;
	for (;x>=1;x--)
	{
		i=i*x;
	}
	return (i);
} 
int main()
{
	
	
	int a,b,c;
	cin>>a>>b;
	c=fac(a)+fac(b);
	cout<<c;
	return 0;
}



