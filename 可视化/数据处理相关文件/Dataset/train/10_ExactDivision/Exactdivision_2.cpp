#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
	cin>>a;
	b=3;
	sum=0;
	for(;a+1>b;b=b+3)
	{if (b%2!=0) sum=sum+b;
	else continue;};
	cout<<sum;
	return 0;
}
	
	
	
	























