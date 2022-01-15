#include <iostream>
using namespace std;
int main()
{
	int i, n;
	cin >> n;
	while (n != -1)
	{

		for (i = 2; i < n; i++)
		{
			if (n%i == 0)break;
		}
		if (i == n && n % 10 == 7)
			cout << n << " ";
		cin >> n;
	}
	return 0;
}

