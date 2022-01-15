#include <iostream>
using namespace std;
int main ()
{
	int x,y1,y2,i;
	cin>>x;
	y1=2000+x;
    y2=2009+x;
	i=y1;
	for(;i<=y2;i++)
	{
	if(i%4==0&&i%100!=0)
	{
	cout<<i<<endl;
	}
	}

	return 0;
}
