#include <iostream>
using namespace std;
int main()
{
	int n,m,i,b;
	cin>>n;
	m=n;
	for(;n>=1;n--)
	{
	  for(i=1;i<n;i++)
	  {
		cout<<" ";
	  }
	  for(b=m;b>=n;b--)
	  {
		cout<<"*";
	  }
	  m=m+1;
	  cout<<endl;
	}
	for(n=m/2;n>1;n--)
	{
	  for(b=m/2;b>=n;b--)
	  {
		cout<<" ";
	  }
	  for(i=1;i<=(b*2-1);i++)
	  {
		cout<<"*";
	  }
	  cout<<endl;
	}
	return 0;
}

