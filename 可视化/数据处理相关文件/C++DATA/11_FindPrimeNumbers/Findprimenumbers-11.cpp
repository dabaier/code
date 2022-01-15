#include <iostream>
using namespace std;
int main()
{
	int i,c,a,b;
	for(;c!=-1;)
	{
		cin>>c;
		for(i=2,a=0;i<c;i++)
		{
			if(c%i==0)
			a++;
		}
		b=i%10;
		if(a==0&&b==7)
			cout<<c<<" ";
	}

	return 0;
}



