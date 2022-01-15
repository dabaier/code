#include <iostream>
using namespace std;
void f(int x);
void g(int y);
int main()
{
	int n,a;
	cin>>a;
     n=a;
	for(n=1;n<=a;n++)
	{cout<<endl;g(a-n);f(n);f(n-1);}
	for(n=n-2;n>=0;n--)
	{cout<<endl;g(a-n);f(n);f(n-1);}
	return 0;
}
void f(int x)
{
	int a;
	for(a=1;a<=x;a++)
		cout<<"*";
}
void g(int y)
{
	int a;
	for(a=1;a<=y;a++)
		cout<<" ";
}
