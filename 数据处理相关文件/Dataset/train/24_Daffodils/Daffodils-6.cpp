#include <iostream>
using namespace std;
int main()
{
	int a=100,n=999;
	while(a<=n)
	{
	if((a/100)*(a/100)*(a/100)+(a%100/10)*(a%100/10)*(a%100/10)+(a%100%10)*(a%100%10)*(a%100%10)==a)
		cout<<a<<" ";
	a=a+1;
	}
}

