#include <iostream>
using namespace std;
int main()
{
	int a,b,c=0;
	cin>>a>>b;
	a<b;
	while(a<=b)
	{
		c=c+a;
		a++;
	}
		cout<<c<<endl;
	return 0;
}

