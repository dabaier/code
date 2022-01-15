#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%3==0&&i%2!=0)
		{
			sum=sum+i;
		}
	}
	cout<<sum;

	return 0;
}
