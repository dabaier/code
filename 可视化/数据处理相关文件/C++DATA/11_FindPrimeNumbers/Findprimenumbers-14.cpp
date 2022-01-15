#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n!=-1)
	{
		int i,a=1;
		for(i=2;i<n;i++)
		{
			if(n%i==0&&i!=1) a=0;
		}
		if(n%10==7&&a==1)
		cout<<n<<" ";
	}
	return 0;
}



