#include <iostream>
using namespace std;
int main()
{
   char a;
   int b=0,c=0,d=0;
   while(cin.get(a))
   {
	if(a=='\n')
	break;
	if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
	b++;
	if(a>='0'&&a<='9')
	c++;
	if(a==' ')
	d++;
   }
   cout<<b<<' '<<d<<' '<<c<<' ';
   return 0;
}
