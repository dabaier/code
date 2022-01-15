#include <iostream>
using namespace std;
int main()
{
  int i,a,sum;
  cin>>i;
  for(a=1,sum=0;a<=i;a++)
  {
  if(a%3==0&&a%2==1)
  {
  sum=sum+a;
  
  }

  }
  cout<<sum;
  return 0;
}
