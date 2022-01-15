#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i=100,a;
    while(i<=999)
	{
		if(i==(pow((i/100),3)+pow((i/10-i/100*10),3)+pow((i-i/10*10),3)))
		{
		a=i;
		cout<<a<<" ";
		}
		i++;
	}

	return 0;
}

