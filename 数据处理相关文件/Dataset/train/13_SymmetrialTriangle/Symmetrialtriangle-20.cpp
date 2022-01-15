#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a,x;
	cin >> n;
	for (a = 1; a <=n; a++)
	{
		for (x=a; x > 0; x--)
		{
			cout << 0;
		}
		cout << endl;
	}
	for (a=n-1;a>=0;a--)
	{
		for (x = a; x > 0; x--)
		{
			cout << 0;
		}
		cout << endl;
	}
    return 0;
}
