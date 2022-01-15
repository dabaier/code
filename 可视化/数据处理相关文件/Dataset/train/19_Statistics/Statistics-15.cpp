#include <iostream>
using namespace std;
int main()
{
	 char a;
	 int b=0,c=0,d=0;
	 while(cin.get(a))
		 if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
			 b++;
		 else if (a==' ')
			 c++;
		 else if ((a>='0'&&a<='9'))
			 d++;
		 cout<<b<<" "<<c<<" "<<d;
	return 0;
	
}
