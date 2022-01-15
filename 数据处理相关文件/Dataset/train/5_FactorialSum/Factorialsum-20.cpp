#include <iostream>
using namespace std;
int fac(int x)
{	
int i=x-1;
     for(;i>0;i--)
     {
     	x=x*i;
	 }
	 return x;
}
int main()
{
	int a,b,s;
	cin>>a>>b;
	a=fac(a);
	b=fac(b);
	s=a+b;	
	cout<<s;
	return 0;	
}

