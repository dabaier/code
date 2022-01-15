#include <iostream>
using namespace std;
int pow3(int x)
	{
	int y;
		y = x * x*x;
		return y;
	}
int main()
{
	int a = 100, b = 999;
	while (a <= b)
	{
		if (a == pow3(a / 100) + pow3((a % 100) / 10) + pow3(a % 10))
			cout << a << " ";
		a++;
	}
		return 0;
}
