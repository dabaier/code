#include <iostream>
using namespace std;
int main()
{ 
  int a,b;
  cin>>a;
  while(a/10>0)
  {
  b=a%10; 
  a=a/10;
  cout<<b<<" ";
  }
  cout<<a;
return 0;
}

