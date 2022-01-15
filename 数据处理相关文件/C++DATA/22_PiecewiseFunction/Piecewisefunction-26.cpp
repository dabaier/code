#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y;
	cin >> x;
	if (x < 1)
		y = x;
	if (1 <= x && x <= 10)
		y = 2 * x - 2;
	if (x >= 10)
		y = 3 * x - 11;
	cout << y << endl;
	return 0;
}
