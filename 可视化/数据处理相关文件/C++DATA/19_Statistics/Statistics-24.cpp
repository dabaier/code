#include <iostream>
using namespace std;
int main()
{
    char a;
	int b=0,c=0,d=0;
    while(cin.get(a)&&a!='\n')
	{
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	{
		b=b+1;
	}
   if(a==' ')
	{
		c=c+1;
	}
	if(a>='0'&&a<='9')
	{
		d=d+1;
	}
	}
	cout<<b<<" "<<c<<" "<<d;
	return 0;
}

