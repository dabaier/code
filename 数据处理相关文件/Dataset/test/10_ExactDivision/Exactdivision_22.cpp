#include <iostream>
using namespace std;
int main()
{
int n,sum=0;
cin>>n;
while(n>1)
{
	if((n%3==0)&&(n%2==1))
		sum=sum+n;
		n--;
}
cout<<sum<<endl;
return 0;
}
