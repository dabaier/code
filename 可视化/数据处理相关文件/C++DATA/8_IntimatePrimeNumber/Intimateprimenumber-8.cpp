#include <iostream>
using namespace std;
int main()
{
	int a,i=1,j;

for(cin>>a;i<a;i++)
{
		for(j=2;j<i;j++)
		{	
			if(i%j==0)
			
		
		break;
			if((i+2)%j==0)
				break;
		}

			if(i==j)
			{
			if(i%2==1)
					
					cout<<i<<" "<<i+2<<endl;
			}
		
		}
	
	return 0;
}

