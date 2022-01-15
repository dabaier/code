#include<iostream>
using namespace std;
int factorial(int a)
{
	int sum=1,i=1;
	for(;i<=a;i++)
	{
		sum=sum*i;
	}
	return sum;
}
int zy(int a,int b)
{
	if(a==0||b==0)
	return 1;
	else
	return (factorial(a)/(factorial(b)*factorial(a-b)));
}
int main()
{
	int a,i,r,s;
	cin>>a;
	for(i=0;i<=a;i++)
	{
		for(r=0;r<2*(a-i);r++)
		cout<<"*";
		for(s=0;s<i+1;s++)
		{
		cout<<zy(i,s);
		if(i!=s)
		cout<<"***";
	    }
		cout<<endl;
	}
	return 0;
}

