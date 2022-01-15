#include <iostream>
using namespace std;
int main()
{
	int a,sum=0;
	cin>>a;
	for(;a>0;a--)
	{
		if(a%3==0&&a%2==1)
		{
			sum=sum+a;
		}
	}
	cout<<sum;
	return 0;
}
