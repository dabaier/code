#include <iostream>
using namespace std;
int main()
{
	int a,b,c,sum=100;
	while(sum<1000)
	{
		a=(sum/100);
		b=(sum%100/10);
		c=(sum%10);
		if(sum==(a*a*a+b*b*b+c*c*c))
		{
			cout<<sum<<" ";
		}
		sum++;
	}

	return 0;
}
