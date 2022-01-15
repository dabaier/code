#include<iostream>
using namespace std;
int main()
{
	int a,i;
	cin>>a;
	for(i=0;i<10;i++)
	{
		if((2000+a+i)%4==0&&(2000+a+i)%400!=0)
		cout<<2000+a+i<<endl;
	}
	return 0;
}

