#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
	for(cin>>n,i=0;i<n;i++)
	{
		for(j=n-i-1;j>0;j--)
			cout<<"";
		for(k=1;k<=i+1;k++)
			cout<<"0";
		cout<<endl<<endl;
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=n-1-i;j>0;j--)
			cout<<"0";
		cout<<endl<<endl;
	}
	return 0;

}

