#include <iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	if((a=='_')||(a<='z'&&a>='a')||(a<='Z'&&a>='A'))
		cout<<"Yes";
	else cout<<"No";
}



