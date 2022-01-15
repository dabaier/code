#include<iostream>
using namespace std;
int main()
{
	int num,a;
	cin>>num;
	while(num>0)
	{
		a=num%10;
	    cout<<a<<" ";
		num=num/10;
	}
	return 0;
}



