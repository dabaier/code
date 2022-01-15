#include <iostream>
using namespace std;
int main()
{
	int a,b,f;
	cin>>a;
	b=2000+a;
	f=b+10;
	for(;b<f;b++)
	{
		int c,d,e;
		c=b%4;
		d=b%100;
		e=b%400;
		if((c==0&&d!=0)||(d==0&&e==0))
		{
			cout<<b<<endl;
		}
	}
	return 0;
}
