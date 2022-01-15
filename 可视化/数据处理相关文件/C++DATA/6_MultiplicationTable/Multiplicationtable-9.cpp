#include <iostream>
using namespace std;
int gh(int i)
{
	for(int j=1;j<=i;j++)
	{
        cout<<j<<'*'<<i<<'='<<j*i<<"  ";
	}
	return i;
}
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		gh(i);
		cout<<endl;
	}
	return 0;
}


