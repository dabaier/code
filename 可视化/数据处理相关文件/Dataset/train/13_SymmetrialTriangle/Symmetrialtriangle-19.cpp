#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<0;
		}
		cout<<endl;
	}
	i--;
	for(;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			cout<<0;
		}
		cout<<endl;
	}
	return 0;
}

