#include<iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	if(a>=65&&a<=90||a==95||a>=97&&a<=122)
	{
		cout<<"Yes"
			<<endl;
	}
	else
	{
		cout<<"No"
			<<endl;
	}

	return 0;
}


