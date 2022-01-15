#include <iostream>
using namespace std;
int main()
{
  int fac(int);
  int a,b;
  cin>>a>>b;
  cout<<fac(a)+fac(b)<<endl;
  return 0;
}
 int fac(int n)
 {
   int sum=1;
   for(int i=1;i<=n;i++)
   {
	 sum=sum*i;
   }
   return sum;
 }

