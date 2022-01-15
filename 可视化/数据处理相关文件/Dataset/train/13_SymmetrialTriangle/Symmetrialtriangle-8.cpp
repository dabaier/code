#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,d;
	cin>>a;
    for(b=0;b<a;b++)
	{
		for(d=1;d<=b+1;d++)
		{
			cout<<'0';
		}
		cout<<endl;
	}
	for(b=a-2;b>=0;b--)
	{
		for(d=1;d<=b+1;d++)
		{
			cout<<'0';
		}
		cout<<endl;
	}
	return 0;
}
