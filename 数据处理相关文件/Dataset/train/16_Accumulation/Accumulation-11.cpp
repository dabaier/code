#include <iostream>
using namespace std;
int main()
{
	int a,b,i,sum;
	cin>>a>>b;
	i=a;
	sum=0;
	while(i>=a&&i<=b)
	{
        sum=sum+i;
		i++;

	}
	cout<<sum;
	return 0;
}

