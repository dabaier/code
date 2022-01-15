#include <iostream>
using namespace std;
int fac(int n);
int main()
{
	int a,b,n;
	cin>>n;
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
			cout<<b<<"*"<<a<<"="<<a*b<<"  ";
		cout<<endl;
		
	}
	return 0;
}
