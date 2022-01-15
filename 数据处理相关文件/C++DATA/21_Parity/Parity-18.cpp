#include <iostream>
using namespace std;
int main()
{int a,b,c,d;
	cin>>a>>b;
	c=a+b;
	d=c%2;
	if (d!=1)
		cout<<"Y";
	else
		cout<<"N";
	return 0;
}

