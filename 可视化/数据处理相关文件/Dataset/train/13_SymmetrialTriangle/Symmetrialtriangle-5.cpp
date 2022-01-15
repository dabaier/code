#include <iostream>
using namespace std;
int main()
{
	int a,i,c;
    cin>>a;
    i=1;
	while(i<=a)
	{
		for(c=1;c<=i;c++)
		{
			cout<<0;
		}
		cout<<endl;
		i++;
	}
	i=1;
	while(i<=a)
	{
		for(c=a-1;c>=i;c--)
		{
			cout<<0;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
