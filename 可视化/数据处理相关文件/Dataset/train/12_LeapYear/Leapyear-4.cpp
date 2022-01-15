#include <iostream>
using namespace std;
int main()
{
	int x,i;
	cin>>x;
	for(i=2000;i<=2009;i++)
	{
		if((x+i)%4==0)
			cout<<x+i<<endl;
	}
}

