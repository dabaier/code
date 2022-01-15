#include <iostream>
using namespace std;
int main()
{
	int d=1,i,s,n=1;
	cin>>i;
	for(;i>=n;n++)
{
	d=1;
	for(;d<=n;d++)
	{
		s=d*n;
		cout<<d<<"*"<<n<<"="<<s<<"  ";
	}
	cout<<'\n';
}
	return 0;
}

