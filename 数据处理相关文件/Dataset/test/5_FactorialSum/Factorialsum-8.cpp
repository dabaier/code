#include <iostream>
using namespace std;
int fac(int n)
{
    int i=1;
    int m=1;
	for(;i<=n;i++)
	m=m*i;
	return(m);
}




int main()
{	
	int a,b;
	cin>>a>>b;
	cout<<fac(a)+fac(b);
	return 0 ;
}

