#include <iostream>
using namespace std;
int fac(int n)
{
	int a=1;
for(n;n>=1;n--)
{
	a=a*n;
}
	return a;
}
int main()
{
	int a,b,d;
	cin>>a>>b;
   d=fac(a)+fac(b);
   cout<<d<<endl;
	return 0;
}
