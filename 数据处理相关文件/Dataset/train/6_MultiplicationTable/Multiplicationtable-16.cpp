#include <iostream>
using namespace std;
int multi(int a,int b)
	{
		cout<<a<<"*"<<b<<'='<<a*b<<' '<<' ';
			return 0;
	}
	int multioneline(int n)
	{
		for(int i=1;i<=n;i++)
			multi(i,n);
		cout<<endl;
		return 0;
	}
	int main()
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
			multioneline(i);
		cout<<endl;
		return 0;
	}




