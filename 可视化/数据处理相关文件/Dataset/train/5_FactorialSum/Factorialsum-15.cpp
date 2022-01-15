#include<iostream>
using namespace std;
int fac(int n)
{
	int s;
	for(s=1;n>0;n--)
	s=n*s;

	return s;
}
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=fac(a)+fac(b);
	cout<<c
		<<endl;
	return 0;

}
