#include <iostream>
using namespace std;
int main()
{
	int a,b,i;
	cin>>a;
	i=a+2000;
	b=a+2010;
	for(;i<b;i++)
	{
		if(i%4==0)
		{
			cout<<i
			    <<endl;
		}
	}
	return 0;
}


