#include<iostream>
using namespace std;
int main()
{
	int n,c;
	int function(int x);
	cin>>n;
	c=function(n);
	cout<<c;
	return 0;
}
int function(int x)
{
	int y;
	if(x<1) y=x;
	else if(x>=1&&x<10) y=2*x-2;
	else y=3*x-11;
    return y;	
}

