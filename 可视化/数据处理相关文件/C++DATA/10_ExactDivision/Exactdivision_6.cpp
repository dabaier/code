#include<iostream>
using namespace std;
int main()
{
	int a,i,sum=0;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		if(i%3==0&&i%2==1)
		{
			sum=sum+i;
		}
	}
	cout<<sum;
	return 0;
}


