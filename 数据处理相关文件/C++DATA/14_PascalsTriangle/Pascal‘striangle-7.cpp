#include <iostream>
#include<iomanip>
using namespace std;
int g(int x,int y);
int jc(int q);
int jc1(int w,int e);
void f(int x);
int main()
{
	int n;
	cin >> n;
	for ( int a=n; n >= 0; n--)
	{
		cout << setfill('*') << setw(2 * n + 1) << "1"; f(a - n); cout << endl;
	}
	return 0;
}
void f(int x)
{
	int p = 1;
	if (x > 0) { for (int b = x; x > 0; x--) { cout << setfill('*') << setw(4) << g(b, p); p++; } }
}
int g(int x,int y)
{
	int z;
	z = jc1(x, y) / jc(y); return z;
}
int jc(int a)
{
	int z = 1;
	for (; a > 1; a--)
		z = z * a;
	return z;
}
int jc1(int x, int a)
{
	int z = 1;
	for (; a >0; x--)
	{
		z = z * x;
		a--;
	}return z;
}
