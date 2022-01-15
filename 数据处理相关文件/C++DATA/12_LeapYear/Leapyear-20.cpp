#include <iostream>
using namespace std;
int main()
{
	int a,year,c;
	cin>>a;
	year=2000;

	year=year+a;
	c=year+10;
    while(year<=c)
	{
	        if((year%4==0&&year%100!=0)||(year%400==0))
			{
			  cout<<year<<endl;
			
			} 
		year++;
	}
      return 0;
}
