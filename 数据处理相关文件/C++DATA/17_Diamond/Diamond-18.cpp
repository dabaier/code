#include <iostream>
using namespace std;
int main()
{
	int n,i,j,a,b,K,X;
	cin>>n;
	K=n-1;
	X=1;
	for(i=0;i<n;i++)
	{
		for(a=0;a<K;a++)
		cout<<" ";
		for(b=0;b<X;b++)
		cout<<"*";
		K--;
		X=X+2;
		cout<<endl;
	}
	X=X-4;
	K=K+2;
	for(j=0;j<n-1;j++)
	{
		for(a=0;a<K;a++)
		cout<<" ";
		for(b=0;b<X;b++)
		cout<<"*";
		K++;
		X=X-2;
		cout<<endl;
	}
	return 0;
}


