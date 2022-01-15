#include <iostream>
using namespace std;
int main()
{
	int a,i,A=0;
	for(cin>>a;a!=-1;cin>>a)
	{
		i=2;
while(i<=a&&a!=27)
		{
			if((a%i)==0)
			{
             A++;
            }
				if(a%10==7&&A==0)
				{
				cout<<a<<' ';
				break;
			    }
			 i++;
		}
	}
	return 0;
}



