#include<iostream>
using namespace std;
int prime(int x)
{
	int i;
	for(i=2;i<=x;i++)
	{
		if(x%i==0&&x!=i) break;
		if(x%i==0&&x==i&&x%2) return x;
	}
}
void close(int a)
{
	int b=a-2;
	if(prime(b)==prime(a)-2) cout<<b<<" "<<a<<endl;
}
int main()
{
	int num;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
	   close(i);		
	}
	return 0;
}


