#include <iostream>
using namespace std;
int main()
{
  int a,sum=0;
  cin>>a;
   for (;a;a--)
   {
	 if (a%2&&!(a%3))
	 {
	   sum=sum+a;
	 }
   }
  cout<<sum<<endl;
  return 0;
}
