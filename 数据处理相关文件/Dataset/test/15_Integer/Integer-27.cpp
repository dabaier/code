#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, n, c;
	cin >> a;
	for (n = 1; n < 100 && a>0;n++)
	{
		c = a % 10;
		a = a - c;
		a = a / 10;
		cout << c << " ";
	}
	return 0;
}

