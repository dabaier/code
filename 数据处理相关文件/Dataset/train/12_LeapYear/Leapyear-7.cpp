#include <iostream>
using namespace std;
int main()
{	
	int n,i;
	cin>>n;
	for(i=2000+n;i<n+2010;i++)
	{
		if (i%4==0)
		{ 
			if (i%100==0)
	
			{
				if (i%400==0)
					cout<<i<<endl;
			}
		else cout<<i<<endl;
		}
	}
	
	return 0;
}

