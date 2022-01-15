#include<iostream>
#include <cmath>
using namespace std;
int main()
{   
	int a,b,c,d;
	cin>>a;
	for(c=1;c<=a;c++)
	{
		for(d=1;d<=c;d++)
		{
			b=c*d;
			cout<<d<<'*'<<c<<'='<<b<<"  ";
		}
		cout<<endl;
	}
    
    return 0;
}


