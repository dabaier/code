#include <iostream>
using namespace std;
int main()
{
	int a,n,i=1;
	cin>>n;
	a=2000+n;
	for(;i<=9;)
	{
		if(a%4==0)
		{
		
		cout<<a<<'\n';
	    }
	    a++;
	    i++;
	}
	return 0;
}


