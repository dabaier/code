#include <iostream>
using namespace std;
int main()
{
	int a,s;
	cin>>a;
	while(a>0)
{
	s=a-(a/10)*10;
	cout<<s<<" ";
	a=a/10;
}
return 0;
}



