#include <iostream>
using namespace std;
int main()
{
    int a,c;
	cin>>a;
	a=a+2000;
	for(c=0;c<10;a++)
	{
		c++;
		if(a%4==0)
			cout<<a<<endl;
	}
	return 0;
}

