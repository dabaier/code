#include <iostream>
using namespace std;
int main()
{
	int a,t;
	cin>>a;
    for(;a>0;a=a/10)
	{
		t=a%10;
		cout<<t<<" ";
	}
	return 0;
}

