#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b;
    cin>>a;
    if(a<1)
    {
		b=a;
		cout<<a<<endl;
	}
	else if(a>=1&&a<10)
	{
		b=(a*2)-2;
		cout<<b<<endl;
	}
	else if(a>=10)
	{
		b=(3*a)-11;
		cout<<b<<endl;
	}
	return 0;
}
