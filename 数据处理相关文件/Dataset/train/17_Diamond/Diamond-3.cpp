#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n - 1; j >= i; j--)
		{
			cout << ' ';
		}
		for (int k = 1; k <= 2*i-1; k++)
		{
			cout << '*';
		}
		cout << endl;
	}
	for (int x = n-1; x >0; x--)
	{
		for (int y = n-x; y >0;y--)
		{
			cout << ' ';
		}
		for (int z = 2*x-1;z>0;z--)
		{
			cout << '*';
		}
		cout << endl;
	}
}
