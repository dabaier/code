#include <iostream>
using namespace std;
int main()
{
	int a,i;
	cin>>a;
	for(;a>0;a=(a-i)/10)
	{
		i=a%10;
	    cout<<i<<" ";

	}

	return 0;
}

