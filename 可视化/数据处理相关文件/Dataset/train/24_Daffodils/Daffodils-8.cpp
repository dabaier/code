#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	a=100;
	while(a<1000)
	{
		b=a%10;
		c=a/10%10;
		d=a/100;
		if(((b*b*b)+(c*c*c)+(d*d*d))==a)
		{
			cout<<a<<" ";
		}
		a++;
	}
	return 0;
}

