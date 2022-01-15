#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
for(b=0;a>0;a--)
{
	if(a%3==0&&a%2==1)
b=b+a;
}
cout<<b;
return 0;
}

