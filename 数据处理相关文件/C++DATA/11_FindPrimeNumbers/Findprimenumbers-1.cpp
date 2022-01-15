#include<iostream>
using namespace std;
void prime(int x)
{
	for(int i=2;i<=x;i++)
	{
		if(x%i==0&&x!=i) break;
		if(x%i==0&&x==i) cout<<x<<" ";
	}
 } 
int main()
{
	int a;
	cin>>a;
	if(a!=-1)
	{
		for(;a!=-1;cin>>a)
		{
			if(a%10==7) prime(a);	
		}	
	}
	return 0;
 } 

