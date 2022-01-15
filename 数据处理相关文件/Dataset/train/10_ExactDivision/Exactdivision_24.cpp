#include <iostream>
using namespace std;
int main()
{
	int N,n=1,s;
	cin>>N;
	for(s=0;N>=n;n++)
	{
		if(n%3==0&&n%2==1)
		{
			s=s+n;
		}
	}
	cout<<s;
	return 0;
}

