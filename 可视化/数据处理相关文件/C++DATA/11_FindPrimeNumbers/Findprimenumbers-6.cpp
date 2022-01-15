#include <iostream>
using namespace std;
int main()
{
  int n,i;
  for(cin>>n; n!=-1; cin>>n)
  {
   for(i=2;i<n;i++)
	  
	   if(n%i==0)
		   break;
	   if(i==n)
	   {
		   if(n%10==7)
	       cout<<n<<" ";
	   }
	   
  }
 
	return 0;
}



