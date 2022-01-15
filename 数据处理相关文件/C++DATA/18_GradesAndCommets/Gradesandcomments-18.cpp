#include <iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	switch(a)
	{
	case'A':cout<<"100~85\n";break;
	case'B':cout<<"84~70\n";break;
	case'C':cout<<"69~60\n";break;
	case'D':cout<<"no pass\n";break;
	default:cout<<"error\n";break;
	}
	return 0;
}
