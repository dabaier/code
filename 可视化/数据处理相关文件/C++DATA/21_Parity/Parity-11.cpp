#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=(a+b)%2;
	if(c==0)
	{
		cout<<"Y";
	}
	else 
	{
		cout<<"N";
	}
	return 0;
}

