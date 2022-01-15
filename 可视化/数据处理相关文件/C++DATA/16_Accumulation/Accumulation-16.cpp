#include <iostream>
using namespace std;
int main()
{
	int a,b,sum;
	cin>>a>>b;
	sum=0;

	while(a<=b)
	{
         sum=sum+a;
		 a++;
	}
	cout<<sum<<endl;
	return 0;
}


