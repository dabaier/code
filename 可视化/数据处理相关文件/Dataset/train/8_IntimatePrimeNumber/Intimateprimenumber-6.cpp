#include <iostream>
using namespace std;
int f(int n)
{
	int a;
	for(a=2;a<n;a++)
	{
		if(n%a==0)
		{
				break;
		}
		
	}
	if(a==n)
	return n;
}
int main()
{
	int a,b;
	cin>>a;
	if(a%2==0)
	{
		b=a-1;
	}
	else
	{
		b=a;
	}
	int c,d;
	for(c=3,d=5;c<=b-2,d<=b;c=c+2,d=d+2)
	{
		if(f(c)+2==f(d)&&f(d)!=b)
		{
			cout<<f(c)<<" "<<f(d)<<endl;
		}
		if(f(d)==b&&f(c)+2==f(d))
		{
			cout<<b-2<<" "<<b;
		}
	}
	return 0;
}
