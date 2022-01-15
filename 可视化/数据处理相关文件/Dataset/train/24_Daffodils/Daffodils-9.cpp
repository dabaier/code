#include <iostream>
using namespace std;
int main()
{
int a,b,c,d,e;
a=100;
	while (a<1000)
	{
	c=a/10;
	b=a%10;
	d=c%10;
	e=c/10;
	if (b*b*b+d*d*d+e*e*e==a)
		cout<<a<<' ';
	a=a+1;

	}
	return 0;
}
