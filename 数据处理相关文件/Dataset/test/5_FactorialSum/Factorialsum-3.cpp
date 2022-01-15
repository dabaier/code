#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,m=1,n=1;
	cin>>a>>b;
    for(c=1;c<=a;c++)
	{
		m=m*c;
	}
	for(d=1;d<=b;d++)
	{
		n=n*d;
	}
	cout<<n+m<<endl;
	return 0;
}
