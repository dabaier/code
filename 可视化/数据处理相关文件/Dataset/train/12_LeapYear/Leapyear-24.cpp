#include <iostream>
using namespace std;
int main()
{
	int n,a=2000,b;
	cin>>n;
	a=a+n;
	b=a+10;
	for(int i=a;i<b;i++)
	{
		if(i%4==0)
		cout<<i<<endl;
	}
}

