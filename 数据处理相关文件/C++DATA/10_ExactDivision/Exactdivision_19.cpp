#include <iostream>
using namespace std;
int main()
{
    int N,a=1,b=0;
	for(cin>>N;a<=N;a++)
	{
		if((a%2-1==0)&&(a%3==0))
		b=b+a;
	}
		cout<<b<<endl;
	return 0;
}
