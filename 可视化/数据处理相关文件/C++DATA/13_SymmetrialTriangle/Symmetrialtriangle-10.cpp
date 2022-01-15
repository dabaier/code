#include <iostream>
using namespace std;
int main ()
{ 
  int n;
  cin>>n;
  for (int i=1;i<=n;i++)
  {
	  for (int z=1;z<=i;z++)
	  {
	   cout<<"0";
	  }
    cout<<endl;
  }
   for (int m=n-1;m>=1;m--)
   {
	   for (int k=m;k>=1;k--)
	   {
        cout<<"0";
	   }
          cout<<endl;
   }
  return 0;
}
