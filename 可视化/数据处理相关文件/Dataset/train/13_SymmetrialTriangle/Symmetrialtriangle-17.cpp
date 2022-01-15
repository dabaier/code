#include <iostream>
using namespace std;
int main()
{
  int a,b,i;
  cin>>a;
   for (b=1;b<2*a;b++)
   {
	 if (b<=a)
	 {
	   for (i=1;i<=b;i++)
	   {
		 cout<<0;
	   }
	 }
	 else 
	 {
	   for (i=b;i<=2*a-1;i++)
	   {
		 cout<<0;
	   }
	 }
	cout<<endl;
   }
  return 0;
}



