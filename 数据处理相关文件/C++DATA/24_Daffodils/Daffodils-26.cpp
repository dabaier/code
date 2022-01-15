#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int n,a=0,b=0,c=0;
   n=100;
   while(n>99&&n<1000)
   {
	   	a=n%10;
		b=(n/10)%10;
	    c=n/100;
		if(n==a*a*a+b*b*b+c*c*c)
		{cout<<n<<" ";}
		n++;
   }
   return 0;
}

