#include<iostream>
using namespace std;
int main()
{
	int a,b;
    cin>>a;
	a=a+2000;
	b=a+9;
	while(a<=b)
	{
		if(a%4==0&&a%100!=0&&a%400==0)
		{
			cout<<a<<endl;
		}
		else
		{
			a++;
		}
		
	}
	
 return 0;
}
