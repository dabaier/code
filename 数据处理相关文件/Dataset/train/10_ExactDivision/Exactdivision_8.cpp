#include <iostream>
using namespace std;
int main()
{
	int a,sum,i;
	cin>>a;
	for(sum=0,i=0;i<=a;i++)
		if (i%3==0)
			if(i%2==1)
			sum=sum+i;
	cout<<sum;
	return 0;
}




