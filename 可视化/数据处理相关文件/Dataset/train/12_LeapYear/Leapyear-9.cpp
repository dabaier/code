#include <iostream>
using namespace std;
int main()
{
  int a,i;
  cin>>a;
  a=a+2000;
  for(i=a;i<a+10;i++)
  {
    if(i%4==0)
	{
	 cout<<i<<endl;
	}
  
  }
  
  return 0;
}

