#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin >> x ;
	if (x < 1) y = x;
	else if (x < 10 && x >= 1) y = x * 2 - 2;
	else y = 3 * x - 11;
	cout << y;
	return 0;
}

