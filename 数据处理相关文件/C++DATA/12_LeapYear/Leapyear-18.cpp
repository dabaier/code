#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	c=a+2000;
	b=a+2010;
	for(;c<b;c++)
	{
		if(c%4==0)
		{
			cout<<c
			    <<endl;
		}
	}
	return 0;
}

