#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
for(b=2000+a;b<=a+2009;b++)
{
	if(b%4==0&&b%100!=0)
cout<<b<<endl<<endl;
}
return 0;
}
