#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;
b=1;
cin>>a;
while(b<=a)
{
	for(c=1;c<=a-b;c++)
	{
		cout<<" ";
	}
	for(d=1;d<=2*b-1;d++)
	{
		cout<<"*";
	}
	b++;
	cout<<endl;
}
b=1;
while(b<=a-1)
{	
	for(c=1;c<=b;c++)
	{
		cout<<" ";
	}
	for(d=1;d<=2*(a-b)-1;d++)
	{
	cout<<"*";
	}
	b++;
	cout<<endl;
}
return 0;
}

