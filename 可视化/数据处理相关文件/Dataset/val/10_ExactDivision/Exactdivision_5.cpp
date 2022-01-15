#include <iostream>
using namespace std;
int main()
{
	int n,sum;
	cin>>n;
	for(int i=1;i<=n;i=i+2)
	{
		if(i%3==0)
		{
			sum=sum+i;
		}
	}
	cout<<sum;
}
