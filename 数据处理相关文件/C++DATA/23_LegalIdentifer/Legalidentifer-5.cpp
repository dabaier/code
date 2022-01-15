#include <iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	if((a>='a'&&a<='z')||(a=='_')||(a>='A'&&a<='Z'))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
