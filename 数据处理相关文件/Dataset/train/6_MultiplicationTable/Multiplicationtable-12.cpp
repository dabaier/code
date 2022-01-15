#include <iostream>
using namespace std;
int zwz1(int n)
{
   for (int i=1;i<=n;i++)
   {
     cout<<i<<"*"<<n<<"="<<i*n;
	 if (i<n)
	 {
	 cout<<"  ";
	 }
   }
   return 0;
}
int zwz2(int n)
{
  for (int i=1;i<=n;i++)
  {
    zwz1(i);
	cout<<endl;
  }
  return 0;
}
int main ()
{
    int n,m;
	cin>>n;
   m=zwz2(n);
      m;
	return 0;
}
