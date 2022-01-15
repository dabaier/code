#include <iostream>
using namespace std;
int main()
 {int fac(int);              
  int a,b,sum=0;
  
  cin>>a>>b;
  sum=sum+fac(a)+fac(b);
  cout<<sum<<endl; 
  return 0;
 }

 int fac(int n)
  {int f=1;
   for (int i=1;i<=n;i++)
     f=f*i;
   return f;
  }
