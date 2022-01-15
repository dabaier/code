#include <iostream>
using namespace std;
int fac(int n)
{ int sum=1;
 for (int i=1;i<=n;i++)
 {
	 sum=sum*i;
 }

 return sum;
}
int main()
{  
	int a,b,c;
   cin>>a>>b;
  c=fac(a)+fac(b);
  cout<<c;
  return 0;
}

