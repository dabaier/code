#include <iostream>
using namespace std;
int fac(int n)
{
	int i=1,sum=1;
	for(cin>>n;i<=n;i++)
	{
		sum=sum*i;
	}
	return sum;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<fac(a)+fac(b)<<endl;
	return 0;
}
