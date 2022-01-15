#include <iostream>
using namespace std;
int fac(int n);
int main()
{
	int a,b;
	cin>>a>>b;
     cout<<fac(a)+fac(b);
		 return 0 ;
}
 int fac(int n)
  {int f=1;
   for (int i=1;i<=n;i++)
     f=f*i;
   return f;
  }

