#include <iostream>
using namespace std;
int main()
{
	int n,a=0,i,j,k;
	cin>>n;
	for(i=1;n/i!=0;i=i*10)
	{
		a=a+1;
	}
	k=10;
	for(j=0;j<a;j++)
	{
		cout<<n%k<<" ";
		n=n/10;
	}
	return 0;
}


