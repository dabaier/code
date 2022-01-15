#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d=100;
	while(d>=100&&d<=999)
	{	a=d/100;
	    b=(d/10)%10;
	    c=d%10; 
	if(d==a*a*a+b*b*b+c*c*c)
	{
		cout<<d<<" ";
	}
	
	d++;
	}
	return 0;
}
