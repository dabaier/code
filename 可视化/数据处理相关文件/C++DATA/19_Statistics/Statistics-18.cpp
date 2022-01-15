#include <iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0;
    char ch;
	while(cin.get(ch)&&ch!='\n')
	{
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		{
			a++;
		}
	
		else if(ch==' ')
		{
			b++;
		}
	
	
		else if(ch>='0'&&ch<='9')
		{
			c++;
		}
	}
	   cout<<a<<' '<<b<<' '<<c<<endl;
	
	return 0;
}
