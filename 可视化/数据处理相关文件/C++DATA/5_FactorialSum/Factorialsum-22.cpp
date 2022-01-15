#include <iostream>
using namespace std;
int g(int x);
int main()
{
	int a,b;
	cin>>a>>b;
cout<<g(a)+g(b)<<endl;
	return 0;
}
int g(int x)
{
	int a=1;
   for(int n=1;n<=x;n++)
	   a=a*n;
   return a;
}

