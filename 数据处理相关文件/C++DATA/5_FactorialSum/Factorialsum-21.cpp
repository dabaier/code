#include <iostream>
using namespace std;
int main()
{
	int fac(int);
	int a,b;
	cin>>a>>b;
	cout<<fac(a)+fac(b)<<endl; 
} 

int fac(int n)
{
	int i,sum=1;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	return sum;
}

