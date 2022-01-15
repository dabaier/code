#include <iostream>
using namespace std;
int main()
{
int a,b,c,d,e;
c=2000;
d=2099;
cin>>a;
e=c+a;
b=e+10;
while(e<b)
{
	if((e%4==0&&a%100!=0)||(e%400==0))
	{
		cout<<e<<endl;
	}
	e++;
}
	return 0;
}

