#include <iostream>
using namespace std;
int main()
{
	int a,b,c,s,i=100;
	while((i<1000)&&(i>=100))
	{
		a=i/100;   
		b=(i-a*100)/10; 
		c=i-a*100-b*10; 
		s=a*a*a+b*b*b+c*c*c;
		if(i==s) cout<<s<<' ';
		i++;
	}
	return 0;
}

