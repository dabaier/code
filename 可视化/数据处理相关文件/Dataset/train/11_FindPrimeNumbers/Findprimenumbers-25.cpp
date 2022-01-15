#include <iostream>
using namespace std;
int main()
{
	int a,t;
	cin>>a;
	for(;a!=-1;cin>>a)
	{
		t=a%10;
		if(t==7)
		{
			int c;
			for(c=2;c<a;c++)
			{
				if(a%c==0)
				{
					break;
				}
			
			}
			if(a==c)
			{
				cout<<a<<" ";
			}
		}
	}
	return 0;
}
