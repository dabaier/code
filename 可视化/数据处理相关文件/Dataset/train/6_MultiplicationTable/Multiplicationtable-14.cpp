#include <iostream>
using namespace std;
int kfc(int n);
int main()
{
	int x,y,n;
	cin>>n;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=x;y++)
			cout<<y<<"*"<<x<<"="<<x*y<<"  ";
		cout<<endl;
		
	}
	return 0;
}

