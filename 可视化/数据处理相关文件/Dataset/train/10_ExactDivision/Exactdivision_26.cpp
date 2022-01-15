#include <iostream>
using namespace std;
int main()
{
	int a,N,sum=0;
	cin>>N;
	for(a=1;a<=N;a++)
	{
		if(a%3==0&&a%2!=0)
			sum=sum+a;
		else continue;
	}
	cout<<sum<<endl;
    return 0;
}
