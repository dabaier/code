#include <iostream>
using namespace std;
int main ()
{   int a,b;
	for (cin>>a;a!=0;)
	{
	 b=a-(a/10)*10;
     a=a/10;
	 cout<<b<<" ";
	}
	return 0;
}

