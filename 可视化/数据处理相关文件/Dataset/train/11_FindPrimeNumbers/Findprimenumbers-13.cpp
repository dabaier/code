#include <iostream>
using namespace std;
int main()
{
	int n,c,a,b;
	for(;c!=-1;)
	{
	cin>>c;
	for(n=2,a=0;n<c;n++)
	{
    if(c%n==0)
	a++;
	}
	b=n%10;
	if(a==0&&b==7)
	cout<<c<<" ";
	}
	return 0;
}

