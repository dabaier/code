#include<iostream>
using namespace std;
int main()
{
	int num,a,b,i,t;
	cin>>num;
	a=2*num-1;
	for(i=1;i<=(a-2);)
	{
		t=i;
		for(;t>0;t--)
		{
			cout<<'*';
		}
		cout<<endl;
		i+=2;
	}

	b=a;
	for(;a>0;)
	{
		b=a;
		for(;b>0;b--)
		{
			cout<<'*';
		}
		cout<<endl;
		a-=2;
	}
}



