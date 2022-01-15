#include <iostream>
using namespace std;
int main()
{
	int i,a,b;
	cin>>i;
	for(a=1,b=0;a<=i;a++)
	{
		if(a%3==0&&a%2==1)
		{
			b=a+b;
		}
	}
	cout<<b
		<<endl;
	return 0;
}

