#include <iostream>
using namespace std;
int main()
{
int a,b=1,c;
cin>>a;
while(b<=a)
{
for(c=1;c<=b;c++)
{
   cout<<"0";
}
b++;
cout<<endl;
}
b=1;
while(b<=a)
{
	for(c=a-1;c>=b;c--)
	{
		cout<<"0";
	}
	b++;
	cout<<endl;
}
return 0;
}
