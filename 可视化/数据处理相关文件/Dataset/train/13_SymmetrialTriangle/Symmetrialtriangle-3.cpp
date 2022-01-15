#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for ( int x = 1; x <= i; x++)
		{
			cout << '0';
		}
		cout << endl;
	}
	for (int j = 1; j <= n - 1; j++)
	{
		for (int k = n; k >= j+1; k--)
		{
			cout << '0';
		}
		cout << endl;
	}
}
