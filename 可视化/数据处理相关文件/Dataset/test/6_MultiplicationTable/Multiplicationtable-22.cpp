#include <iostream>
using namespace std;
int M(int x)
{
	int y=1;
	while(y<=x)
	{
		int z=1,w;
		for(;z<=y;z++)
		{
			w=z*y;
			cout<<z<<"*"<<y<<"="<<w<<"  ";
		}
		y++;
		cout<<endl;
	}
	return(x);
}
int main()
{
	int a;
	cin>>a;
	M(a);
	return 0;
}
