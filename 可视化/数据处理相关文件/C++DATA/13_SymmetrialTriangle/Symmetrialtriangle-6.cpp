#include <iostream>
#include <cmath>
using namespace std;
void add(int n);
int main()
{
	int n,i;
	cin>>n;
	{
		for(i=1;i<n;i++)
	{
	add(i);
	}
	for(int i=n;i>=1;i--)
{
	add(i);
}
	}
return 0;
}
void add(int n)
{
for(int i2=1;i2<=n;i2++)
{
cout<<'0';
}
cout<<endl;
}


