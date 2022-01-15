#include<iostream>
using namespace std;
void multiple(int a,int b)
{
	cout<<a<<'*'<<b<<'='<<a*b<<"  ";
}
void repeat(int j)
{
	for(int i=1;i<=j;i++)
	{
	multiple(i,j);
	}
	cout<<endl;
}
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	repeat(i);
	}
}



