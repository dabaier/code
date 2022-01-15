#include <iostream>

using namespace std;
int main()
{
	int a=0,b=0,d=0;
	char c;
	while (cin.get(c)&&c!='\n')
	{   if (c<='9'&&c>='0')
	    a++;
	    if ((c<='z'&&c>='a')||(c>='A'&&c<='Z'))
		b++;
		if (c==' ')
	    d++;
	}
	cout<<b<<" "<<d<<" "<<a<<endl;
    return 0;}
