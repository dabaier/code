#include <iostream>
using namespace std;
int main()
{
  int n,i,sum;
  cin>>n;
  for(i=1,sum=0;i<=n;i++)
  {
     if(i%3==0&&i%2!=0)
	 {
		 sum=sum+i;
	 }
	
  }
   cout<<sum<<endl;
  return 0;
}
