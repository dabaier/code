#include <iostream>
using namespace std;
int main()
{
  int a,b,i;
  int f(int,int);
  cin>>a;
   for (b=1;b<=a+1;b++)
   {
     for (i=2*b-1;i<=2*a;i++)
	 {
	   cout<<"*";
	 }
	 for (i=0;i<b;i++)
	 {
	   cout<<f(i,b-1);
	   if (b!=1&&i<b-1)
	   cout<<"***";
	 }
	cout<<endl;
   }
  return 0;
}
int f(int n,int m)
{ 
  int i,mu1;
  if (n==0)
  return 1;
  for (i=m,mu1=1;i>m-n;i--)
  {
	mu1=mu1*i;
  }
  int mu2=1;
  for (i=1;i<=n;i++)
  {
	mu2=mu2*i;
  }
  return (mu1/mu2);
}


