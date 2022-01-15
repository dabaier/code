#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c;
	cin>>a;
    for(b=0;b<a;b++)
	{
		for(c=1;c<=b+1;c++)
		{
			cout<<'0';
		}
		cout<<endl;
	}
	for(b=a-2;b>=0;b--)
	{
		for(c=1;c<=b+1;c++)
		{
			cout<<'0';
		}
		cout<<endl;
	}
	return 0;
}

