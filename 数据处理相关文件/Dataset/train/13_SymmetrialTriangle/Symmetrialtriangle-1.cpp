#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
    cin>>a;
    b=1;
	while(b<=a)
	{
		for(c=1;c<=b;c++)
		{
			cout<<0;
		}
		cout<<endl;
		b++;
	}
	b=1;
	while(b<=a)
	{
		for(c=a-1;c>=b;c--)
		{
			cout<<0;
		}
		cout<<endl;
		b++;
	}
	return 0;
}

