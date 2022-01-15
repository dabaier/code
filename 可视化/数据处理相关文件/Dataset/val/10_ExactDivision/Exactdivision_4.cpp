#include <iostream>
using namespace std;
int main()
{
 int sum=0,b,n=1;
 cin>>b;
 for(;n<=b;n++)
	 if(n%3==0&&n%2==1)
	 {
	  sum=sum+n;
	 }
	 cout<<sum<<endl;
 return 0;
}

