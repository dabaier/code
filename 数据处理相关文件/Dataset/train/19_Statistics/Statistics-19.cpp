#include <iostream>
using namespace std;
int main()
{
	char ch;
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while(cin.get(ch)&&ch!='\n')
	{
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		{
			a++;
		}
		if(ch==' ')
		{
			b++;
		}
		if(ch>='0'&&ch<='9')
		{
			c++;
		}
	}
	cout<<a<<' '<<b<<' '<<c;
	return 0;
}
