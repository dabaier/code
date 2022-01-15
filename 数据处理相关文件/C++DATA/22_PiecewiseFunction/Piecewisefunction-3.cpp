#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a<1) cout<<a;
	if(a>=1&&a<10) cout<<2*a-2;
	if(a>=10) cout<<3*a-11;
	return 0;
}


