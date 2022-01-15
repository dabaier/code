#include <iostream>
using namespace std;
int jiecheng(int n)
{
	int sum=1,i=1;
	for(;i<=n;i++)
		{
		sum=sum*i;
		}
	return sum;
}
int fun(int a,int b)
{
	if(a==0||b==0)
	return 1;
	else
	return (jiecheng(a)/(jiecheng(b)*jiecheng(a-b)));
}
int main()
{
	int n,i,m,s;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(m=0;m<2*(n-i);m++)
		cout<<"*";
		for(s=0;s<i+1;s++)
			{	
		cout<<fun(i,s);
		if(i!=s)
		cout<<"***";
	    	}
		cout<<endl;
	}
	return 0;
}


