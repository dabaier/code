#include <iostream>
using namespace std;
int main()
{

   int x,y;
   cin>>x;
   if(x<1)
   {
	   y=x;
	   cout<<y<<endl;
   }
   else
   {
	   if(x>=10)
	   {
		   y=3*x-11;
		   cout<<y<<endl;
	   }
	   else
	   {
		   y=2*x-2;
		   cout<<y<<endl;
	   }
   }
   return 0;
}

