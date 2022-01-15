#include <iostream>
using namespace std;
int main()
{
	char c1;
    cin>>c1;
	if (('a'<=c1&&c1<='z')||(c1=='_')||('A'<=c1&&c1<='Z'))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}
