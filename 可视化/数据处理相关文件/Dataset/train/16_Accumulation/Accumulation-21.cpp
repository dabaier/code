#include <iostream>
using namespace std;
int main()
{
	int a,b,c,sum;
	cin>>a>>b;
	sum=b;
    c=b-1;
	while(c>=a)
	{
		
		  sum=sum+c;
		
		c--;
	}
	cout<<sum<<endl;
	return 0;
}

