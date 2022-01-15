#include <iostream>
using namespace std;
int main()
{
	char grade;
	cin>>grade;
	switch(grade)
	{
	case'A':cout<<"100~85"<<endl;break;
	case'B':cout<<"84~70"<<endl;break;
	case'C':cout<<"69~60"<<endl;break;
	case'D':cout<<"no pass"<<endl;break;
	default:cout<<"error"<<endl;break;
	}
	return 0;
}
