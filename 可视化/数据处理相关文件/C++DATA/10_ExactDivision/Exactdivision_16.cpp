#include<iostream>
using namespace std;
int main()
{
	int n,sum,i;
	cin>>n;
	for(sum=0,i=1;i<=n;i=i+2)
	{if(i%3==0)
	{
		sum=sum+i;

	}
	}
	
	cout<<sum<<endl;
	return 0;

}
