#include <iostream>
using namespace std;
int main()
{
	int a,i,c,d;
	cin>>a;
	i=1;
	while(i<=a)
	{
		for(c=1;c<=a-i;c++)
		{
			cout<<" ";
		}
		for(d=1;d<=2*i-1;d++)
		{
			cout<<"*";
		}
		i++;
		cout<<endl;
	}
	i=1;
	while(i<=a-1)
	{
        for(c=1;c<=i;c++)
		{
			cout<<" ";
		}
		for(d=1;d<=2*(a-i)-1;d++)
		{
			cout<<"*";
		}
		i++;
		cout<<endl;
	}
	return 0;
}
