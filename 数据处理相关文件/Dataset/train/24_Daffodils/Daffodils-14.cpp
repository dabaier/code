#include <iostream>
using namespace std;
int main()
{
	int a=100,b,c,d,e;
    while(a>=100&&a<=999)
{
    d=a%10;
 	c=(a/10)%10;
	b=a/100;
	e=(d*d*d)+(c*c*c)+(b*b*b);
	if(e==a)
{
	cout<<a<<" ";
}
	a=a+1;
}
	return 0;
}

