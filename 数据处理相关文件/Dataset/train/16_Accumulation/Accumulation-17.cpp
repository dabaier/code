#include <iostream>
using namespace std;
int main()
{
	int m,n,i,sum=0;
	cin>>m>>n;
	i=m;

	while (i>=m&&i<=n)
		{
			sum=sum+i;
			i++;
		}
		cout<<sum;
	
		

	return 0;

}

