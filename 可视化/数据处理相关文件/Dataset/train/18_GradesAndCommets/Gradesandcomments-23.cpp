#include <iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	switch (a)
	{
	case 'A': cout<<"100~85";break;                 
	case 'B': cout<<"84~70";break;
	case 'C': cout<<"69~60";break;
	case 'D': cout<<"no pass";break;
	default : cout<<"error";
	return 0;
	}
}
