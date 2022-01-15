#include <iostream>
#include <cmath>
using namespace std;
int lk(int a, int b)
{
	cout << a << "*" << b << "=" << a * b<<"  ";
	return 0;
}
int qxy(int n)
{
	for (int i = 1; i <= n; i++)
		lk(i, n);
	return 0;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		qxy(i);
		cout << endl;
	}
	return 0;
}
