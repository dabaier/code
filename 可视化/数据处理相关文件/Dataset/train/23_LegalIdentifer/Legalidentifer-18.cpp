#include <iostream>
using namespace std;
int main()
{
	char a;
	a=cin.get();
	if(a=='_'||a<='Z'&&a>='A'||a>='a'&&a<='z')
	{
		cout<<"Yes";
		}
		else
		{
			cout<<"No";
			}	
    return 0;
}



