#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a;
	b=1;
	while(b<=a)
	{
		for(d=1;d<=b;d++)
		{
			cout<<"0";
		}
		for(c=1;c<=a-b;c++)
        {
			cout<<" ";
		}
		b++;
		cout<<endl;
	}
	b=1;
	while(b<=a-1)
	{
		for(d=1;d<=a-b;d++)
		{
			cout<<"0";
		}
		for(c=1;c<=a-(a-b);c++)
        {
			cout<<" ";
		}
		b++;
		cout<<endl;
	}
	return 0;
}
