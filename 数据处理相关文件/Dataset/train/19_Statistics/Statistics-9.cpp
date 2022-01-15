#include <iostream>
using namespace std;
int main()
{
	char d;
	int a=0,b=0,c=0;
	while(cin.get(d))
	{
		if(d=='\n')
		break;
if((d>='A' && d<='Z')||(d>='a' && d<='z'))
                  a++;
if(d>='0'&&d<='9')
b++;
if(d==' ')
c++;
	}
	cout<<a<<' '<<c<<' '<<b<<' ';
	return 0;
}


	


            
