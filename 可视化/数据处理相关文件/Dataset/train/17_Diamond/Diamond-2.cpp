#include <iostream>
using namespace std;
int main() 
{
    int a,b,c,d,e;
	cin>>a;
	b=a-1;
    c=1;
	while(b>=0&&c<=2*a-1)
	{
	    d=b;
		e=c;
		for(b=d;b>0;b--)
		{
			cout<<' ';
		}
		for(c=1;2*e-1>=c;c++)
		{
			cout<<'*';
		}
		for(b=d;b>0;b--)
		{
			cout<<' ';
		}
		b=d;
		c=e;
		b--;
		c++;
	    cout<<endl;
	}
     	b=1;
    	c=a-1;
		while(b>=0&&c>0)
		{
		    d=b;
		    e=c;
		for(b=d;b>0;b--)
		{
			cout<<' ';
		}
		for(c=1;2*e-1>=c;c++)
		{
			cout<<'*';
		}
		for(b=d;b>0;b--)
		{
			cout<<' ';
		}
		b=d;
		c=e;
		b++;
		c--;
		cout<<endl;
		}
	return 0;
}

