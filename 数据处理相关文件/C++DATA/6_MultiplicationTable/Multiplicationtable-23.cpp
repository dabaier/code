#include<iostream>
using namespace std;
int main()
{ 
  void mul(int x);
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {  mul(i);
     cout<<endl;;
  }
  return 0;
}
void mul(int x)
{
  for(int a=1;a<=x;a++)
  {  
     cout<<a<<"*"<<x<<"="<<a*x<<"  ";
	
  }
  
}

