#include <iostream>
using namespace std;
int main()
{
	int f=100,b,c,d,e;
    while(f>=100&&f<=999)
	{
		d=f%10;
 	    c=(f/10)%10;
	    b=f/100;
	    e=(d*d*d)+(c*c*c)+(b*b*b);
		if(e==f)
		{
			cout<<f<<" ";
		}
		
		f++;
	}
	return 0;
}



