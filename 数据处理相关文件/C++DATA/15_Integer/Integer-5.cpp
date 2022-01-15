#include <iostream>
using namespace std;
int main()
{
	int x,a;
	cin>>x;
	for(;x!=0;)
	{
		a=x%10;
		x=x/10;
		cout<<a<<" ";
	}
}


