#include <iostream>
using namespace std;
int main()
{
	int i,n,a,b;
	for(;n!=-1;)
	{
		cin>>n;
		for(i=2,a=0;i<n;i++)
		{
			if(n%i==0)
			a++;
		}
		b=n%10;
		if(a==0&&b==7)
			cout<<n<<" ";
	}

	return 0;
}

