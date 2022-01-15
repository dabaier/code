#include <iostream>
#include <cmath>
using namespace std;
int fac(int n)
{
   int sum=1,N,i=1;
   for(N;i<=N;i++)
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
 cout<<c<<endl;
 return 0;
}
