#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	for(;n>=0;n--)
	{
		if(n%3==0&&n%2!=0)
		{
			sum=sum+n;
		}
	}
	cout<<sum;
	return 0;
}

