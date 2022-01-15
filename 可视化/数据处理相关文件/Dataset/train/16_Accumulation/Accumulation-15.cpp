#include <iostream>
using namespace std;
int main()
{  int a,b,i,sum=0;
cin>>a>>b;
if (a>b)
{
  for (i=b;i<=a;i++)
  {
  sum=sum+i;
  }
  cout<<sum;
}
 else if (b>a)
 {
  for (i=a;i<=b;i++)
  {
  sum=sum+i;
  }
 }
    cout<<sum;
  return 0;

}

