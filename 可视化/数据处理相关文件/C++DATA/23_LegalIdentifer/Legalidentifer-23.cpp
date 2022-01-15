#include <iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	if (a>='a'&&a<='z')
		cout<<"Yes"<<'\n';
	else if(a<='Z'&&a>='A')
			cout<<"Yes"<<'\n';
	else if(a=='_')
			cout<<"Yes"<<'\n';
	else cout<<"No"<<'\n';
	return 0;
}
