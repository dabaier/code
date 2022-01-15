#include<iostream>
using namespace std;
int main()
{
	int i,a=0,b=0, c=0;
	i=100;
     
	while (i>=100&&i<= 999)
{
        a = i%10;
        b = (i/10)%10;
		c = i/100;

        if(i==a*a*a+b*b*b+c*c*c)

        {

            cout<<i<<" ";

        }
i++;
    }

    return 0;

}

