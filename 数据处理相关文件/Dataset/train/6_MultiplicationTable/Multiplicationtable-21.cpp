#include <iostream>
using namespace std;
int main()
{
int a,x,pow;
cin>>a;
for(int n=1;n<=a;n++)
{
	for(x=1;x<=n;x++)
	{
          pow=x*n;
		  cout<<x<<"*"<<n<<"="<<pow<<"  ";
	}
	cout<<endl;
}
return 0;
}
