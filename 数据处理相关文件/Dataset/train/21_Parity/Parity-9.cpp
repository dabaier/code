#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=a+b;
	if(c%2==1)
		cout<<"N";
	if(c%2==0)
		cout<<"Y";
	return 0;
}
