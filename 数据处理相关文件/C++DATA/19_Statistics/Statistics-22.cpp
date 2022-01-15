#include <iostream>
using namespace std;
int main()
{
	char a;
	int x=0,y=0,z=0;
	while(cin.get(a)&&a!='\n')
	{
		if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z'))) x++;
		if((a>='0')&&(a<='9')) y++;
		if(a==' ') z++;
	}
	cout<<x<<" "<<z<<" "<<y;
	return 0;
 } 
 


