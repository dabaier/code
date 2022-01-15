#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,strangesum;
	for(n=100;n<1000;n++)
	{a=n%10;
	b=(n%100-a)/10;
	c=(n-a-10*b)/100;
	strangesum=a*a*a+b*b*b+c*c*c;
			if(strangesum==n)
	{
		cout<<n<<" ";
	}
	}
 } 


