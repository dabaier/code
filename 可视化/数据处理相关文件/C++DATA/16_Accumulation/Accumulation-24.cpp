#include <iostream>
using namespace std;
int main()
{
	int a,b,e=0,s;
	cin>>a>>b;
	while(a<=b)
	{
		e=e+a;
		a=a+1;
	}
	s=e;
	cout<<s;
	return 0;
}


