#include<iostream>
using namespace std;
int main()
{
	int a,i;
	for(cin>>a;a!=-1;cin>>a)
	{
    if(a%10==7)
	{
      for(i=2;i<=a;i++)
	  {
		  if(a%i==0)
			  break;
	  }
	  if(i==a)
		  cout<<i<<" ";
	}
	}
	return 0;
} 
