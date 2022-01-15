#include <iostream>
using namespace std;
int main()
{
	int a,sum;
	cin>>a;
	sum=0;
	while(a>=1)
	{
		if(a%3==0&&a%2!=0)
		{
			sum=sum+a;
		}
		a--;
	}
	cout<<sum<<endl;
	return 0;
}
