#include <iostream>
using namespace std;
int main()
{
int x,y;
cin>>x;
if(x<1)
{
  y=x;
  cout<<y;
}
if(x>=1&&x<10)
{
  y=2*x-2;
  cout<<y;
}
if(x>=10)
{
  y=3*x-11;
  cout<<y;
}
return 0;
}

