#include <iostream>
using namespace std;
int main()
{
	int a,i=1,sum=0;
	cin>>a;
	while(i<=a)
	{
		if(i%2==1)
		{if(i%3==0)
		sum=sum+i;
		
		}
		i++;
	}
      cout<<sum;
	return 0;
}
