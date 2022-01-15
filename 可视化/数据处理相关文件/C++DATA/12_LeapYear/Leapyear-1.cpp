#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
    b=a+2000;
	for(;b<a+2009;b++)
	{
		if(b%4==0)
		cout<<b<<endl;
	}
}

