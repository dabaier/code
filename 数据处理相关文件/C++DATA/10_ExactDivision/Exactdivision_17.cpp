#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	while(n>0)
	{
		if(n%2==1&&n%3==0)
		{
			sum=sum+n;
		}
	n--;
	}
	cout<<sum;
	return 0;
}
