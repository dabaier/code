#include <iostream>
using namespace std;
int main()
{
    int a,b;
    for(cin>>a;a!=-1;cin>>a)
	{
		for(b=2;b<a;b++)
			if(a%b==0)
				break;
			if(b==a)
			{
				if(a%10==7)
				{
					cout<<a<<" ";
				}
			}
	}
	return 0;
}

