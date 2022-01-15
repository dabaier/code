#include <iostream>
using namespace std;
int main ()
{   int n,i=1,sum=0;
  cin>>n;
for (;i<=n;i++)
{
if(i%3==0&&i%2==1)
{
sum=sum+i;
}
}
  cout<<sum;
	return 0;
}
