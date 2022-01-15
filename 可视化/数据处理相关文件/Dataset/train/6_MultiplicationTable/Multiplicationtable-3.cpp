#include <iostream>
using namespace std;
int main()
{
	int fac(int);
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fac(i);
	}
	return 0;
} 

int fac(int n)
{
	int i,j=1;
	for(i=0;i<n;i++)
	{
		cout<<j<<"*"<<n<<"="<<j*n;
		if(i<n-1)
		cout<<"  ";
		j++;
	}
	cout<<endl;
	return 0;
}

