#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a<1)
	{
		a=a;
	}
	else if(a>=1&&a<10)
	{
		a=2*a-2;
	}
	else if(a>=10)
	{
		a=3*a-11;
	}
	cout<<a<<endl;
	return 0;
}
